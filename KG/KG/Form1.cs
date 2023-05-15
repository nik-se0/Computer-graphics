using System;
using System.ComponentModel;
using System.Reflection.Emit;
using System.Runtime.InteropServices;
using System.Windows.Forms;
using static System.Windows.Forms.VisualStyles.VisualStyleElement.Window;

namespace KG
{
    public partial class Form1 : Form
    {
        Bitmap image, image2;
        bool f = false;
        OpenFileDialog dialog;
        //public static int[,] T = new int[3, 3];

        public int[,] T=new int[3, 3];
        /*{
            set
            {
                T = new int[3, 3];
            }
            get
            {
                return T;
            }
        }*/

        public Form1()
        {
            InitializeComponent();
            
        }

        private void �������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            dialog = new OpenFileDialog();   //��������� ����
            dialog.Filter = "Image files|*.png;*.jpg;*.bmp|All files(*.*)|* *"; //������� �����
            if (dialog.ShowDialog() == DialogResult.OK) //���� ����� ������
            { image = image2;
              image = new Bitmap(dialog.FileName);
              pictureBox1.Image = image;  //��������� �������� � box
              pictureBox1.Refresh();  //�������� box
              f = true;
            }

        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
           // if (f)
            {
                InvertFilter filter = new InvertFilter();
                backgroundWorker1.RunWorkerAsync(filter);
                //Bitmap resultImage = filter.processImage(image);
                //pictureBox1.Image = image;
                // pictureBox1.Refresh();
            }
        }

        private void backgroundWorker1_DoWork(object sender, System.ComponentModel.DoWorkEventArgs e)
        {
           Bitmap newImage = ((Filters)e.Argument).processImage(image, backgroundWorker1);
           if (backgroundWorker1.CancellationPending != true) image = newImage;
            //pictureBox1.Image = image;
              // pictureBox1.Refresh();
        }

        private void backgroundWorker1_ProgressChanged(object sender, ProgressChangedEventArgs e)
        {
            progressBar1.Value = e.ProgressPercentage;
            label1.Text = Convert.ToString(e.ProgressPercentage)+"%";

        }
  

        private void button1_Click(object sender, EventArgs e)
        {
            backgroundWorker1.CancelAsync();
            progressBar1.Value = 0;
            label1.Text = Convert.ToString(0)+"%";

        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new BlurFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void backgroundWorker1_RunWorkerCompleted(object sender, RunWorkerCompletedEventArgs e)
        {
                if (!e.Cancelled)
                {
                    pictureBox1.Image = image;
                    pictureBox1.Refresh();
                }
                progressBar1.Value = 0;
            label1.Text = Convert.ToString(100) + "%";

        }

        private void ������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new GaussianFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ���������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new GrayScaleFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void �����ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new SepiaFilter();
            backgroundWorker1.RunWorkerAsync(filter);

        }

        private void �������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new JrFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new SobelFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Embossing();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void �������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new TurnFilter();
            backgroundWorker1.RunWorkerAsync(filter); 
        }

        private void �����ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new VFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Opening(T);
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void toolStripMenuItem1_Click(object sender, EventArgs e)
        {

        }

        private void dilationToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Dilation(T);
            backgroundWorker1.RunWorkerAsync(filter);

        }

        private void erosionToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Erosion(T);
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void openingToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Opening(T);
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void closingToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Closing(T);
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void blackHatToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new TopHat(T);
            backgroundWorker1.RunWorkerAsync(filter);

        }

        private void ���������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new Mediana();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ������������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new LinearStretch();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new GrayScaleFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ���ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new D4Filter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

        private void ���������������������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Form2 frm2 = new Form2(); 
            frm2.Show(this);
            int a = T[0,0];
        }

        private void ��������ToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Filters filter = new SharpnessFilter();
            backgroundWorker1.RunWorkerAsync(filter);
        }

       
    }
}