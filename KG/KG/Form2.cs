using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using static System.Windows.Forms.DataFormats;
using static System.Windows.Forms.VisualStyles.VisualStyleElement;

namespace KG
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
            Tab.RowCount = 3;
            this.Tab[0, 0].Value = 1;
            this.Tab[0, 1].Value = 1;
            this.Tab[0, 2].Value = 1;
            this.Tab[1, 0].Value = 1;
            this.Tab[1, 1].Value = 1;
            this.Tab[1, 2].Value = 1;
            this.Tab[2, 0].Value = 1;
            this.Tab[2, 1].Value = 1;
            this.Tab[2, 2].Value = 1;
        }

        private void Tab_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {

            int[,] tmp = new int[3, 3]; 
            tmp[0, 0] = Convert.ToInt32(this.Tab[0,0].Value);
            tmp[0, 1] = Convert.ToInt32(this.Tab[0, 1].Value);
            tmp[0, 2] = Convert.ToInt32(this.Tab[0, 2].Value);
            tmp[1, 0] = Convert.ToInt32(this.Tab[1, 0].Value);
            tmp[1, 1] = Convert.ToInt32(this.Tab[1, 1].Value);
            tmp[1, 2] = Convert.ToInt32(this.Tab[1, 2].Value);
            tmp[2, 0] = Convert.ToInt32(this.Tab[2, 0].Value);
            tmp[2, 1] = Convert.ToInt32(this.Tab[2, 1].Value);
            tmp[2, 2] = Convert.ToInt32(this.Tab[2, 2].Value);
            Form1 F1 = (Form1)this.Owner;
            F1.T = tmp;
            Close();
            //Form1.Show();

        }
    }
}
