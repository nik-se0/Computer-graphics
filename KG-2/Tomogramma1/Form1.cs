using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using OpenTK;
using OpenTK.Graphics.OpenGL;

namespace Tomogramma1
{
    public partial class Form1 : Form
    {
        Bin bin = new Bin();        //Создайте объект класса Bin в классе Form1.
        View view = new View();
        
        bool loaded = false;        //Флаг запуска отрисовки, если данные загружены .
        bool needReload = false;
        int currentLayer;
        int min; 
        int wid;
        //int Xposition;
      //  int Yposition;
     //   int Xrotation;
      //  int Yrotation
      //  bool isDragging;


        /* private int oldWidth;
         private int oldHeight;
 */

        /* Xposition = 0;
       Yposition = 0;
       Xrotation = 0;
       Yrotation = 0; */

        public Form1()
        {
            min = -1000;
            wid = 1001;
            InitializeComponent();
            glControl1.Invalidate();
        }

        private void открытьФайлToolStripMenuItem_Click(object sender, EventArgs e)
        {
            OpenFileDialog dialog = new OpenFileDialog();
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                string str = dialog.FileName;
                bin.readBIN(str);
                trackBar1.Maximum = Bin.Z - 1; //!!!!
                view.SetupView(glControl1.Width, glControl1.Height);
                loaded = true;
                glControl1.Invalidate();
            }
        }

        private void glControl1_Paint(object sender, PaintEventArgs e)
        {
            if (loaded)
            {
                if (radioButton1.Checked)
                {
                    view.DrawQuads(currentLayer, min, wid);
                    glControl1.SwapBuffers();
                }
                else if (radioButton2.Checked)
                {
                    if (needReload)
                    {
                        view.generateTextureImage(currentLayer, min, wid);
                        view.Load2DTexture();
                        needReload = false;
                    }
                    view.DrawTexture();
                    glControl1.SwapBuffers();
                }
                else if (radioButton3.Checked)
                {
                    view.DrawQuadsStrip(currentLayer, min, wid);
                    glControl1.SwapBuffers();

                }
            }
        }

        private void trackBar1_Scroll(object sender, EventArgs e)
        {
            currentLayer = trackBar1.Value;
            needReload = true;
        }

        private void Application_Idle(object sender, EventArgs e)
        {
            while (glControl1.IsIdle) //после рендера одного кадра и вывода его на экран автоматически начинать рендерить следующий кадр. Функция Application_Idle проверяет, занято ли OpenGL окно работой, если нет, то вызывается функция Invalidate, которая заставляет кадр рендериться заново.
            {
                displayFPS();
                glControl1.Invalidate();
            }
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            Application.Idle += Application_Idle; //подключите Application_Idle на автоматическое выполнение.
        }

        int FrameCount;
        DateTime NextFPSUpdate = DateTime.Now.AddSeconds(1);
        void displayFPS()
        {
            
            if (DateTime.Now >= NextFPSUpdate)
            {
                this.Text = String.Format("CT Visualizer (fps = {0})", FrameCount);
                NextFPSUpdate = DateTime.Now.AddSeconds(1);
                FrameCount = 0;

            }
             FrameCount++;
        }

        private void radioButton1_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton1.Checked)
            { radioButton2.Checked = false;
                radioButton3.Checked = false;
            }
        }

        private void radioButton2_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton2.Checked)
            {
                radioButton1.Checked = false;
                radioButton3.Checked = false;
            }
        }


        private void trackBar2_Scroll(object sender, EventArgs e)
        {
            min = trackBar2.Value;
            needReload = true;
        }

        private void trackBar3_Scroll(object sender, EventArgs e)
        {
            wid = trackBar3.Value;
            needReload = true;
        }

        private void radioButton3_CheckedChanged(object sender, EventArgs e)
        {
            if (radioButton3.Checked)
            {
                radioButton2.Checked = false;
                radioButton1.Checked = false;
            }
        }
    }
}
