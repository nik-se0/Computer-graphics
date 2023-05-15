using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;
using System.Drawing;
using System.ComponentModel;
using System.Drawing.Drawing2D;



namespace KG
{
    abstract class Filters
    {
        public int Clamp(int value, int min = 0, int max = 225)   //привести значения к допустимому диапазону.
        {
            if (value < min) return min;
            if (value > max)
                return max;
            return value;
        }
        protected abstract Color calculateNewPixelColor(Bitmap sourceImage, int x, int y); //вычислять значение пикселя отфильтрованного изображения

        public virtual Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height); //создает пустое изображение исходного размера
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / resultImage.Width * 100)); if (worker.CancellationPending)
                    return null;
                for (int j = 0; j < sourceImage.Height; j++)
                {
                    resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
                }
            }

            return resultImage;
        }

    }

    //Точечные фильтры
    class InvertFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(255 - sourceColor.R, 255 - sourceColor.G, 255 - sourceColor.B);
            return resultColor;
        }

    }
    class GrayScaleFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            double intens = 0.299 * (sourceColor.R) + 0.587 * sourceColor.G + 0.114 * sourceColor.B;
            int c = (int)intens;
            Color resultColor = Color.FromArgb(c, c, c);
            return resultColor;
        }

    }
    class SepiaFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            double intens = 0.299 * (sourceColor.R) + 0.587 * sourceColor.G + 0.114 * sourceColor.B;
            int c = (int)intens;
            int k = 24;
            Color resultColor = Color.FromArgb(Clamp(c + 2 * k), Clamp((int)c + k / 2), Clamp(c - 1 * k));
            return resultColor;
        }

    }
    class JrFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            int k = 24;
            Color resultColor = Color.FromArgb(Clamp(sourceColor.R + k), Clamp(sourceColor.G + k), Clamp(sourceColor.B + k));
            return resultColor;
        }

    }
    class TurnFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            int x0 = sourceImage.Width / 2;
            int y0 = sourceImage.Height / 2;
            double R = -Math.PI / 4;
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                        int x1 = (int)((i - x0) * Math.Cos(R) - (j - y0) * Math.Sin(R) + x0);
                        int y1 = (int)((i - x0) * Math.Sin(R) + (j - y0) * Math.Cos(R) + y0);
                        if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                        { resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                        else { resultImage.SetPixel(i, j, Color.Black); }
                }
            }
            return resultImage;
        }
    }
    class VFilter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            double R = Math.PI ;
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int x1 = (int) (i +20*Math.Sin(2*R*j/60));
                    int y1 = (int)j;
                    if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                    { resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                    else { resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j)); }
                }
            }
            return resultImage;
        }
    }
    class LinearStretch : Filters
    {
        protected int R_max, G_max, B_max;
        protected int R_min, G_min, B_min;
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color c = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb((c.R - R_min) * 255 / (R_max - R_min), (c.G - G_min) * 255 / (G_max - G_min), (c.B - B_min) * 255 / (B_max - B_min));
            return resultColor;
        }

        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            R_max = 0; G_max = 0; B_max = 0;
            R_min = 255; G_min = 255; B_min = 255;
            Color sourceColor;
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / sourceImage.Width * 100));
                if (worker.CancellationPending)
                    return null;
                for (int j = 0; j < sourceImage.Height; j++)
                {
                    sourceColor = sourceImage.GetPixel(i, j);
                    //max
                    if (sourceColor.R > R_max)
                        R_max = sourceColor.R;
                    if (sourceColor.G > G_max)
                        G_max = sourceColor.G;
                    if (sourceColor.B > B_max)
                        B_max = sourceColor.B;
                    //min
                    if (sourceColor.R < R_min)
                        R_min = sourceColor.R;
                    if (sourceColor.G < G_min)
                        G_min = sourceColor.G;
                    if (sourceColor.B < B_min)
                        B_min = sourceColor.B;
                }
            }

            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / sourceImage.Width * 100));
                if (worker.CancellationPending)
                    return null;
                for (int j = 0; j < sourceImage.Height; j++)
                    resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
            }
            return resultImage;
        }
    }

    //Матричные фильтры
    class MatrixFilter : Filters
    {
        protected float[,] kernel = null;
        protected MatrixFilter() { }
        public MatrixFilter(float[,] kernel)
        { this.kernel = kernel; }
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            int radiusX = kernel.GetLength(0) / 2; int radiusY = kernel.GetLength(1) / 2;
            float resultR = 0;
            float resultG = 0;
            float resultB = 0;
            for (int l = -radiusY; l <= radiusY; l++)
            {
                for (int k = -radiusX; k <= radiusX; k++)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color neighborColor = sourceImage.GetPixel(idX, idY);
                    resultR += neighborColor.R * kernel[k + radiusX, l + radiusY];
                    resultG += neighborColor.G * kernel[k + radiusX, l + radiusY];
                    resultB += neighborColor.B * kernel[k + radiusX, l + radiusY];
                }
            }
            return Color.FromArgb(Clamp((int)resultR, 0, 255), Clamp((int)resultG, 0, 255), Clamp((int)resultB, 0, 255)
);
        }

    }
    class BlurFilter : MatrixFilter
    {
        public BlurFilter()
        {
            int sizeX = 3;
            int sizeY = 3;
            kernel = new float[sizeX, sizeY];
            for (int i = 0; i < sizeX; i++)
                for (int j = 0; j < sizeY; j++)
                    kernel[i, j] = 1.0f / (float)(sizeX * sizeY);
        }
    }
    class GaussianFilter : MatrixFilter
    {
        public void createGaussianKernel(int radius, float sigma)
        {// определяем размер ядра
            int size = 2 * radius + 1;
            // создаем ядро фильтра
            kernel = new float[size, size]; // коэффициент нормировки ядра
            float norm = 0;
            // рассчитываем ядро линейного фильтра
            for (int i = -radius; i <= radius; i++)
                for (int j = -radius; j <= radius; j++)
                {
                    kernel[i + radius, j + radius] = (float)(Math.Exp(-(i * i + j * j) / (2 * sigma * sigma)));
                    norm += kernel[i + radius, j + radius];
                }
            // нормируем ядро
            for (int i = 0; i < size; i++)
                for (int j = 0; j < size; j++)
                    kernel[i, j] /= norm;
        }

        public GaussianFilter()
        {
            createGaussianKernel(3, 2);
        }
    }
    class SharpnessFilter : MatrixFilter
    {
        public SharpnessFilter()
        {
            int sizeX = 3;
            int sizeY = 3;
            kernel = new float[sizeX, sizeY];
            kernel[0, 0] = -1.0f;
            kernel[0, 1] = -1.0f;
            kernel[0, 2] = -1.0f;
            kernel[1, 0] = -1.0f;
            kernel[1, 1] = 9.0f;
            kernel[1, 2] = -1.0f;
            kernel[2, 0] = -1.0f;
            kernel[2, 1] = -1.0f;
            kernel[2, 2] = -1.0f;
        }
    }
    class SobelFilter : MatrixFilter
    {
        public SobelFilter()
        {
            int sizeX = 3;
            int sizeY = 3;
            kernel = new float[sizeX, sizeY];
            kernel[0, 0] = -1.0f;
            kernel[0, 1] = -2.0f;
            kernel[0, 2] = -1.0f;
            kernel[1, 0] = 0.0f;
            kernel[1, 1] = 0.0f;
            kernel[1, 2] = 0.0f;
            kernel[2, 0] = 1.0f;
            kernel[2, 1] = 2.0f;
            kernel[2, 2] = 1.0f;
        }
    }
    class Mediana : MatrixFilter
    {

        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            int sizeX = 6;
            int sizeY = 6;
            Color resultColor = Color.White;

            int[] IR = new int[37];
            int[] IG = new int[37];
            int[] IB = new int[37];
            int count = 0;
            for (int l = 0; l < sizeX; l++)
                for (int k = 0; k < sizeY; k++)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color color = sourceImage.GetPixel(idX, idY);
                    IR[count] = color.R;
                    IG[count] = color.G;
                    IB[count] = color.B;

                    count++;

                }
            int R = Sort(IR);
            int G = Sort(IG);
            int B = Sort(IB);
            for (int l = 0; l < sizeX; l++)
                for (int k = 0; k < sizeY; k++)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color color = Color.FromArgb(R, G, B);
                    resultColor = color;
                }

            return resultColor;
        }

        public int Sort(int[] a)
        {
            int temp;
            for (int i = 0; i < 36; i++)
            {
                for (int j = i + 1; j < 36; j++)
                {
                    if (a[i] > a[j])
                    {
                        temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
            return a[18];

        }
    }
    class GrayWorldFilter : Filters
    {
        protected int Avg;
        protected int R, G, B;
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color c = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(Clamp(c.R * Avg / R, 0, 255), Clamp(c.G * Avg / G, 0, 255), Clamp(c.B * Avg / B, 0, 255));
            return resultColor;
        }

        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            R = 0; G = 0; B = 0; Avg = 0;
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / sourceImage.Width * 100));
                if (worker.CancellationPending)
                    return null;
                for (int j = 0; j < sourceImage.Height; j++)
                {
                    Color sourceColor = sourceImage.GetPixel(i, j);
                    R += sourceColor.R;
                    G += sourceColor.G;
                    B += sourceColor.B;
                }
            }
            R = R / (sourceImage.Width * sourceImage.Height);
            G = G / (sourceImage.Width * sourceImage.Height);
            B = B / (sourceImage.Width * sourceImage.Height);
            Avg = (R + G + B) / 3;
            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / sourceImage.Width * 100));
                if (worker.CancellationPending)
                    return null;
                for (int j = 0; j < sourceImage.Height; j++)
                    resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j));
            }
            return resultImage;
        }
    }

    class MathMorphology : Filters
    {
        protected int[,] mask;

        protected MathMorphology() { }
        public MathMorphology(int[,] mask)
        {
            this.mask = mask;
        }

        protected override Color calculateNewPixelColor(Bitmap sourceImage, int i, int j)
        {
            throw new NotImplementedException();
        }
    }
    class Dilation : MathMorphology
    {
        public Dilation()
        {
            this.mask = new int[3, 3] { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
            //this.mask = new int[7, 7] { { 0, 0, 1, 1, 1, 0, 0 }, { 0, 1, 1, 1, 1, 1, 0 }, { 1, 1, 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1, 1, 1 }, { 1, 1, 1, 1, 1, 1, 1 }, { 0, 1, 1, 1, 1, 1, 0 }, { 0, 0, 1, 1, 1, 0, 0 } };

        }
        public Dilation(int[,] mask)
        {
            this.mask = mask;
        }

        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            int radiusX = mask.GetLength(0) / 2;
            int radiusY = mask.GetLength(1) / 2;

            float resultR = 0;
            float resultG = 0;
            float resultB = 0;

            for (int l = -radiusY; l <= radiusY; ++l)
                for (int k = -radiusX; k <= radiusX; ++k)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color neighborColor = sourceImage.GetPixel(idX, idY);
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.R > resultR))
                        resultR = neighborColor.R;
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.G > resultG))
                        resultG = neighborColor.G;
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.B > resultB))
                        resultB = neighborColor.B;
                }
            return Color.FromArgb(Clamp((int)resultR, 0, 255),
                                  Clamp((int)resultG, 0, 255),
                                  Clamp((int)resultB, 0, 255));
        }
    }
    class Erosion : MathMorphology
    {
        public Erosion()
        {
            this.mask = new int[3, 3] { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
        }
        public Erosion(int[,] mask)
        {
            this.mask = mask;
        }

        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            int radiusX = mask.GetLength(0) / 2;
            int radiusY = mask.GetLength(1) / 2;

            float resultR = 255;
            float resultG = 255;
            float resultB = 255;

            for (int l = -radiusY; l <= radiusY; ++l)
                for (int k = -radiusX; k <= radiusX; ++k)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color neighborColor = sourceImage.GetPixel(idX, idY);
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.R < resultR))
                        resultR = neighborColor.R;
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.G < resultG))
                        resultG = neighborColor.G;
                    if ((mask[k + radiusX, l + radiusY] == 1) && (neighborColor.B < resultB))
                        resultB = neighborColor.B;
                }
            return Color.FromArgb(Clamp((int)resultR, 0, 255),
                                  Clamp((int)resultG, 0, 255),
                                  Clamp((int)resultB, 0, 255));

        }
    }
    class Opening : MathMorphology
    {
        public Opening()
        {
            this.mask = new int[3, 3] { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
        }

        public Opening(int[,] mask)
        {
            this.mask = mask;
        }

        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = sourceImage;
            Filters filter = new Erosion();
            resultImage = filter.processImage(resultImage, worker);
            filter = new Dilation();
            resultImage = filter.processImage(resultImage, worker);
            return resultImage;
        }
    }
    class Closing : MathMorphology
    {
        public Closing()
        {
            this.mask = new int[3, 3] { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
        }

        public Closing(int[,] mask)
        {
            this.mask = mask;
        }

        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = sourceImage;
            Filters filter = new Dilation();
            resultImage = filter.processImage(resultImage, worker);
            filter = new Erosion();
            resultImage = filter.processImage(resultImage, worker);
            return resultImage;
        }
    }
    class TopHat : MathMorphology
    {
        public TopHat()
        {
            this.mask = new int[3, 3] { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
        }
        public TopHat(int[,] mask)
        {
            this.mask = mask;
        }

        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = sourceImage;
            Bitmap tmp1 = sourceImage;
            Bitmap tmp2 = sourceImage;
            Filters filter = new Opening();
            tmp1 = filter.processImage(tmp1, worker);

            for (int i = 0; i < sourceImage.Width; i++)
            {
                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int r = sourceImage.GetPixel(i, j).R - tmp1.GetPixel(i, j).R;
                    int g = sourceImage.GetPixel(i, j).G - tmp1.GetPixel(i, j).G;
                    int b = sourceImage.GetPixel(i, j).B - tmp1.GetPixel(i, j).B;
                    Color resultColor = Color.FromArgb(Clamp(r), Clamp(g), Clamp(b));
                    resultImage.SetPixel(i, j, resultColor);
                }
            }

            return resultImage;
        }
    }

    class EmbossingFilter : Filters
    {

        protected float[,] kernel = null;
        protected EmbossingFilter() { }
        public EmbossingFilter(float[,] kernel)
        {
            this.kernel = kernel;
        }

        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
           int radiusX = kernel.GetLength(0) / 2;
           int  radiusY = kernel.GetLength(1) / 2;
            float resultR = 0;
            float resultG = 0;
            float resultB = 0;

            for (int l = -radiusY; l <= radiusY; l++)
                for (int k = -radiusX; k <= radiusX; k++)
                {
                    int idX = Clamp(x + k, 0, sourceImage.Width - 1);
                    int idY = Clamp(y + l, 0, sourceImage.Height - 1);
                    Color sourceColor = sourceImage.GetPixel(idX, idY);
                    resultR += (sourceColor.R * kernel[k + radiusX, l + radiusY]);
                    resultG += (sourceColor.G * kernel[k + radiusX, l + radiusY]);
                    resultB += (sourceColor.B * kernel[k + radiusX, l + radiusY]);

                }

            return Color.FromArgb(
                Clamp((int)(resultR + 255) / 2, 0, 255),
                Clamp((int)(resultG + 255) / 2, 0, 255),
                Clamp((int)(resultB + 255) / 2, 0, 255)
                );

        }
    }
    class Embossing : EmbossingFilter
    {
        public Embossing()
    {
        int sizeX = 3;
        int sizeY = 3;
        kernel = new float[sizeX, sizeY];
        kernel[0, 0] = 0.0f;
        kernel[0, 1] = 1.0f;
        kernel[0, 2] = 0.0f;
        kernel[1, 0] = 1.0f;
        kernel[1, 1] = 0.0f;
        kernel[1, 2] = -1.0f;
        kernel[2, 0] = 0.0f;
        kernel[2, 1] = -1.0f;
        kernel[2, 2] = 0.0f;
    }
}

    //Доп1
    class D1Filter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            int x0 = sourceImage.Width / 4;
            int y0 = sourceImage.Height / 2;
            double R = -Math.PI;
            int index;
            for (index = 0; index < sourceImage.Width/2; index++)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int x1 = (int)((index - x0) * Math.Cos(R) - (j - y0) * Math.Sin(R) + x0);
                    int y1 = (int)((index - x0) * Math.Sin(R) + (j - y0) * Math.Cos(R) + y0);
                    if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                    { resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                    else { resultImage.SetPixel(index, j, Color.Black); }
                }
            }
            while(index < sourceImage.Width)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, index, j)); 
                }
                index++;
            }
            return resultImage;
        }
    }
    class D2Filter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            int x0 = sourceImage.Width / 2;
            int y0 = sourceImage.Height / 2;
            double R = -Math.PI;
            int index;
            for (index = 0; index < sourceImage.Width; index++)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int x1 = sourceImage.Width - index;
                    int y1 = j;
                    if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                    { resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                    else { resultImage.SetPixel(index, j, Color.Black); }
                }
            }
            while (index < sourceImage.Width)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, index, j));
                }
                index++;
            }
            return resultImage;
        }
    }
    class D3Filter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            int x0 = sourceImage.Width / 2;
            int y0 = sourceImage.Height / 2;
            double R = -Math.PI;
            int index;
            for (index = 0; index < sourceImage.Width/2; index++)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int x1 = index;//sourceImage.Width - index;
                    int y1 = j;
                    if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                    { resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                    else { resultImage.SetPixel(index, j, Color.Black); }
                }
            }
            while (index < sourceImage.Width)
            {
                worker.ReportProgress((int)((float)index / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    resultImage.SetPixel(index, j, calculateNewPixelColor(sourceImage, sourceImage.Width - index, j));
                }
                index++;
            }
            return resultImage;
        }
    }

    class D4Filter : Filters
    {
        protected override Color calculateNewPixelColor(Bitmap sourceImage, int x, int y)
        {
            Color sourceColor = sourceImage.GetPixel(x, y);
            Color resultColor = Color.FromArgb(sourceColor.R,
                                                sourceColor.G,
                                                sourceColor.B);
            return resultColor;
        }
        public override Bitmap processImage(Bitmap sourceImage, BackgroundWorker worker)
        {
            Bitmap resultImage = new Bitmap(sourceImage.Width, sourceImage.Height);
            double R = Math.PI/4;
            double R1 = sourceImage.Width/2;

            for (int i = 0; i < sourceImage.Width; i++)
            {
                worker.ReportProgress((int)((float)i / resultImage.Width * 100));
                if (worker.CancellationPending) return null;

                for (int j = 0; j < sourceImage.Height; j++)
                {
                    int x1 = (int)(i + R1 * Math.Sin(2 * R * j / 60));
                    int y1 = (int)j;
                    if (x1 > 0 && y1 < sourceImage.Height && y1 > 0 && x1 < sourceImage.Width)
                    { resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, x1, y1)); }
                    else { resultImage.SetPixel(i, j, calculateNewPixelColor(sourceImage, i, j)); }
                }
            }
            return resultImage;
        }
    }

}


