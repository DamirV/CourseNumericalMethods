using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ode
{
    public partial class Form1 : Form
    {
        double[] y;
        double[] x;
        double a;
        double b;
        double h;
        int n;
        int series;

        public Form1()
        {
            InitializeComponent();
            y = new double[n];
            x = new double[n];
        }

        private void button1_Click(object sender, EventArgs e)
        {
            try
            {
                chart1.Series.Clear();
                Ode o = new Ode();
                o.setab(Convert.ToDouble(textBox1.Text), Convert.ToDouble(textBox2.Text));
                a = Convert.ToDouble(textBox3.Text);
                b = Convert.ToDouble(textBox4.Text);
                h = Convert.ToDouble(textBox5.Text);
                series = Convert.ToInt32(textBox6.Text);

                n = (int)((b - a) / h);

                for (int j = 0; j < series; ++j)
                {
                    chart1.Series.Add("series" + j);
                    chart1.Series[j].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
                    chart1.Series[j].Color = Color.Blue;
                    chart1.Series[j].BorderWidth = 1;

                    y = o.ode(a, j - (int)(series / 2), a, b, h);

                    for (int i = 0; i < n; ++i)
                    {
                        chart1.Series[j].Points.AddXY(a + h * i, y[i]);
                    }
                }
            }
            catch (Exception)
            {

            }
        }

    }
}
