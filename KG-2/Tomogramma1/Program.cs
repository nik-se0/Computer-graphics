using System;
using System.Collections.Generic;
using System.Drawing.Imaging;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Threading.Tasks;
using System.Windows.Forms;

using System.Text; 
using OpenTK;
using OpenTK.Graphics.OpenGL; // Подключение библиотеки OpenTK к проекту
using OpenTK.Audio.OpenAL;
/*  OpenTK используется для добавления кросс-платформенных 3D-графиков, аудио, вычислений на GPU и тактильных взаимодействих к приложению C#., чтобы добавить кросс-платформенные 3D-графику, аудио, вычисления на GPU и тактильные взаимодействия  */
 
namespace Tomogramma1
{
    static class Program
    {
        /// <summary>
        /// Главная точка входа для приложения.
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);
            Application.Run(new Form1());
        }
    }


    class Bin //класс для чтения данных файлов
    {
        public static int X, Y, Z;
        public static short[] array;
        public Bin() { }

        public void readBIN(string path)
        {
            if (File.Exists(path))
            {
                BinaryReader reader = new BinaryReader(File.Open(path, FileMode.Open));

                X = reader.ReadInt32();
                Y = reader.ReadInt32();
                Z = reader.ReadInt32(); //размеры томограммы (3 числа в формате int)

                int arraySize = X * Y * Z;
                array = new short[arraySize];
                for (int i = 0; i < arraySize; ++i)
                {
                    array[i] = reader.ReadInt16(); //массив данных типа short
                }
                /*
                for (int i = 0; i < arraySize; ++i)
                {
                    array[i] = reader.ReadInt16(); //массив данных типа short
                }*/

            }
        }
    }


    class View //класс для визуализации томограммы
    {
        public View() { }

        public void SetupView(int width, int height) //функция настраивает окно вывода.
        {
            GL.ShadeModel(ShadingModel.Smooth);      //включили интерполирование цветов
            GL.MatrixMode(MatrixMode.Projection);
            GL.LoadIdentity();                       //инициализировали матрицу проекции, равна матрице тождественного преобразования
            GL.Ortho(0, Bin.X, 0, Bin.Y, -1, 1);     //задали ортогональное проецирование массива данных в окно вывода
            GL.Viewport(0, 0, width, height);
        }

        public int Clamp(int Value, int Min, int Max)
        {
            if (Value < Min)
                return Min;
            if (Value > Max)
                return Max;
            return Value;
        }

        Color TransferFunction(short value, int m=0, int w=2000) //функция перевода значения плотностей томограммы в цвет
        {
            int min = m;
            int max = m + w;
            int newVal = Clamp((value - min) * 255 / (max - min), 0, 255);
            return Color.FromArgb(255, newVal, newVal, newVal);
        }

        Color TransferFunction2(short value, int m = 0, int w = 2000) //функция перевода значения плотностей томограммы в цвет
        {
            int min = m;
            int max = m + w;
            int newVal = Clamp((value - min) * 255 / (max - min), 0, 255);
            return Color.FromArgb(newVal, 0, 150);
        }


        public void DrawQuads(int layerNumber, int m, int w)
        {
            GL.Clear(ClearBufferMask.ColorBufferBit | ClearBufferMask.DepthBufferBit);
            GL.Begin(BeginMode.Quads);
            for (int x_coord = 0; x_coord < Bin.X - 1; x_coord++)
            {
                for (int y_coord = 0; y_coord < Bin.Y - 1; y_coord++)
                {
                    short value;
                    //1 вершина
                    value = Bin.array[x_coord + y_coord * Bin.X + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value, m, w));
                    GL.Vertex2(x_coord, y_coord);
                    //2 вершина
                    value = Bin.array[x_coord + (y_coord + 1) * Bin.X + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value, m, w));
                    GL.Vertex2(x_coord, y_coord + 1);
                    //3 вершина
                    value = Bin.array[x_coord + 1 + (y_coord + 1) * Bin.X + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value, m, w));
                    GL.Vertex2(x_coord + 1, y_coord + 1);
                    //4 вершина
                    value = Bin.array[x_coord + 1 + y_coord * Bin.X + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value, m, w));
                    GL.Vertex2(x_coord + 1, y_coord);
                }
            }
            GL.End();
        }


        Bitmap TextureImage;
        int VBOTexture;
        public void Load2DTexture()
        {
            GL.BindTexture(TextureTarget.Texture2D, VBOTexture);
            BitmapData data = TextureImage.LockBits
            (new System.Drawing.Rectangle(0, 0, TextureImage.Width, TextureImage.Height),
             ImageLockMode.ReadOnly, System.Drawing.Imaging.PixelFormat.Format32bppArgb);

            GL.TexImage2D(TextureTarget.Texture2D, 0, PixelInternalFormat.Rgba, data.Width, data.Height,
                                    0, OpenTK.Graphics.OpenGL.PixelFormat.Rgba, PixelType.UnsignedByte, data.Scan0);
            TextureImage.UnlockBits(data);
            GL.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMinFilter,
                                    (int)TextureMinFilter.Linear);
            GL.TexParameter(TextureTarget.Texture2D, TextureParameterName.TextureMagFilter,
                                    (int)TextureMagFilter.Linear);
            ErrorCode Er = GL.GetError();
            string str = Er.ToString();
        }
        public void generateTextureImage(int layerNumber, int m, int w)
        {
            TextureImage = new Bitmap(Bin.X, Bin.Y);
            for (int i = 0; i < Bin.X; ++i)
                for (int j = 0; j < Bin.Y; ++j)
                {
                    int pixelNumber = i + j * Bin.X + layerNumber * Bin.X * Bin.Y;
                    TextureImage.SetPixel(i, j, TransferFunction(Bin.array[pixelNumber], m, w));
                }
        }
        public void DrawTexture()
        {
            GL.Clear(ClearBufferMask.ColorBufferBit | ClearBufferMask.DepthBufferBit);
            GL.Enable(EnableCap.Texture2D);
            GL.BindTexture(TextureTarget.Texture2D, VBOTexture);
            GL.Begin(BeginMode.Quads);
            GL.Color3(Color.White);
            GL.TexCoord2(0f, 0f);
            GL.Vertex2(0, 0);
            GL.TexCoord2(0f, 1f);
            GL.Vertex2(0, Bin.Y);
            GL.TexCoord2(1f, 1f);
            GL.Vertex2(Bin.X, Bin.Y);
            GL.TexCoord2(1f, 0f);
            GL.Vertex2(Bin.X, 0);
            GL.End();
            GL.Disable(EnableCap.Texture2D);
        }
        
        public void DrawQuadsStrip(int layerNumber, int m, int w)
        {
            GL.Clear(ClearBufferMask.ColorBufferBit | ClearBufferMask.DepthBufferBit);

            for (int y_coord = 0; y_coord < Bin.Y - 1; y_coord++)
            {
                GL.Begin(BeginMode.QuadStrip);
                for (int x_coord = 0; x_coord < Bin.X; x_coord++)
                {
                    short value;

                    value = Bin.array[x_coord + y_coord * Bin.X
                        + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value,m,w));
                    GL.Vertex2(x_coord, y_coord);

                    value = Bin.array[x_coord + (y_coord + 1) * Bin.X
                        + layerNumber * Bin.X * Bin.Y];
                    GL.Color3(TransferFunction(value,m,w));
                    GL.Vertex2(x_coord, y_coord + 1);
                }
                GL.End();
            }

        }
        
    }
}

