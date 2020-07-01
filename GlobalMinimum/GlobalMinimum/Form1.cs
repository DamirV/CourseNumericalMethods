using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading;
using System.Windows.Forms;
using System.Windows.Forms.DataVisualization.Charting;

namespace GlobalMinimum
{
    public partial class Form1 : Form
    {
        private double[] x;
        private double[] y;
        private int size;
        private double min;

        private double leftX;
        private double rightX;

        private double minimum;
        private double accuracy;
        private double m;
        private double r;

        private int iterations;

        private double a, b, c, d;

        public Form1()
        {
            InitializeComponent();
        }

        public double Func(double value)
        {
            return a * Math.Sin(b * value) + c * Math.Cos(d * value);
            // return value;
        }

        public void ReadValues()
        {
            leftX = Convert.ToDouble(textBox2.Text);
            rightX = Convert.ToDouble(textBox3.Text);
            accuracy = Convert.ToDouble(textBox4.Text);
            r = Convert.ToDouble(textBox5.Text);
            iterations = Convert.ToInt32(textBox6.Text);

            a = Convert.ToDouble(textBox1.Text);
            b = Convert.ToDouble(textBox11.Text);
            c = Convert.ToDouble(textBox12.Text);
            d = Convert.ToDouble(textBox13.Text);

        }

        public void BuildGraph()
        {
            size = (int) ((rightX - leftX) / 0.01) + 1;
            x = new double[size];
            y = new double[size];
            min = double.MaxValue;
            for (int i = 0; i < size; ++i)
            {
                x[i] = leftX + i * 0.01;
                y[i] = Func(x[i]);

                if (y[i] < min)
                {
                    min = y[i];
                }
            }

            chart1.Series.Clear();
            chart1.Series.Add("Function");
            chart1.Series.Add("1");
            chart1.Series[1].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Point;

            chart1.Series["Function"].ChartType = 
                System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Spline;
            chart1.ChartAreas[0].AxisX.Minimum = leftX;
            chart1.ChartAreas[0].AxisX.Maximum = rightX;

            chart1.Series["Function"].BorderWidth = 3;

            for (int i = 0; i < size; ++i)
            {
                chart1.Series["Function"].Points.AddXY(x[i], y[i]);
            }
        }

        private void CalculateConstant(int n, List<double> pointX)
        {
            double M = 0;

            for (int i = 1; i <= n; ++i)
            {
                double tempValue = Math.Abs((Func(pointX[i]) - Func(pointX[i - 1]))
                                            / (pointX[i] - pointX[i - 1]));
                if (tempValue > M)
                {
                    M = tempValue;
                }
            }

            if (M < 0.0001)
            {
                m = 1;
            }
            else
            {
                m = M * r;
            }
        }

        public int RStrongin(int intervals, List<double> pointX)
        {
            int step = 0;
            double R = double.MinValue;

            for (int i = 1; i <= intervals; ++i)
            {
                double first = m * (pointX[i] - pointX[i - 1]);
                double second = Math.Pow(Func(pointX[i]) - Func(pointX[i - 1]), 2) / (m * (pointX[i] - pointX[i - 1]));
                double third = -2 * (Func(pointX[i]) + Func(pointX[i - 1]));
                double tempValue = first + second + third;

                if (tempValue > R)
                {
                    R = tempValue;
                    step = i;
                }
            }

            return step;
        }

        public int RPiyavsky(int intervals, List<double> pointX)
        {
            int step = 0;
            double R = double.MinValue;

            for (int i = 1; i <= intervals; ++i)
            {
                double first = 0.5 * m * (pointX[i] - pointX[i - 1]);
                double second = -1 * (Func(pointX[i]) + Func(pointX[i - 1])) / 2;
                double tempValue = first + second;

                if (tempValue > R)
                {
                    R = tempValue;
                    step = i;
                }
            }

            return step;
        }

        private void CalculatePiyavsky()
        {
            int newPosition = 0;
            int i;
            double newPointX;

            List<double> pointX = new List<double>();

            pointX.Add(leftX);
            pointX.Add(rightX);

            for (i = 1; i <= iterations; ++i)
            {
                CalculateConstant(i, pointX);
                newPosition = RPiyavsky(i, pointX);
                newPointX = (pointX[newPosition] + pointX[newPosition - 1]) / 2 +
                            (Func(pointX[newPosition]) - Func(pointX[newPosition - 1])) / (2 * m);
                pointX.Insert(newPosition, newPointX);

                DrawPoint(pointX[newPosition]);
                if (pointX[newPosition] - pointX[newPosition - 1] < accuracy)
                {
                    break;
                }
            }

            DrawMin(pointX[newPosition], i);
        }

        public void DrawPoint(double _x)
        {
            if (!radioButton6.Checked)
            {
                chart1.Series[1].BorderWidth = 10;
                chart1.Series[1].BorderColor = Color.Black;
                chart1.Series[1].Color = Color.Gray;

                if (radioButton4.Checked)
                {
                    chart1.Series[1].Points.AddXY(_x, min);
                }
                else
                {
                    chart1.Series[1].Points.AddXY(_x, Func(_x));
                }

                chart1.Refresh();
            }
        }
        private void CalculateStrongin()
        {
            int newPosition = 0;
            int i;
            double newPointX;

            List<double> pointX = new List<double>();

            pointX.Add(leftX);
            pointX.Add(rightX);

            for (i = 1; i <= iterations; ++i)
            {
                CalculateConstant(i, pointX);
                newPosition = RStrongin(i, pointX);
                newPointX = (pointX[newPosition] + pointX[newPosition - 1]) / 2 +
                            (Func(pointX[newPosition]) - Func(pointX[newPosition - 1])) / (2 * m);
                pointX.Insert(newPosition, newPointX);

                DrawPoint(pointX[newPosition]);
                if (pointX[newPosition] - pointX[newPosition - 1] < accuracy)
                {
                    break;
                }
            }

            DrawMin(pointX[newPosition], i);
        }

        public void CalculateSelection()
        {
            minimum = double.MaxValue;
            size = (int)((rightX - leftX) / accuracy) + 1;
            x = new double[size];
            y = new double[size];

            for (int i = 0; i < size; ++i)
            {
                x[i] = leftX + i * accuracy;
                y[i] = Func(x[i]);
            }

            int step = 0;
            int wall;

            if (size > iterations)
            {
                wall = iterations;
            }
            else
            {
                wall = size;
            }

            for (int i = 0; i < wall; ++i)
            {
                if (y[i] < minimum)
                {
                    DrawPoint(x[i]);
                    minimum = y[i];
                    step = i;
                }
            }

            DrawMin(x[step], wall);
        }

        public void DrawMin(double _x, int step)
        {
            textBox7.Text = Func(_x).ToString();
            textBox8.Text = (_x).ToString();
            textBox10.Text = (Func(_x)).ToString();
            textBox9.Text = step.ToString();

            chart1.Series.Add("Point");
            chart1.Series["Point"].ChartType = System.Windows.Forms.DataVisualization.Charting.SeriesChartType.Point;
            chart1.Series["Point"].BorderColor = Color.Black;
            chart1.Series["Point"].Color = Color.Gold;

            if (_x == leftX)
            {
                _x += 0.001;
            }

            if (_x == rightX)
            {
                _x -= 0.001;
            }

            chart1.Series["Point"].Points.AddXY(_x, Func(_x));
        }
        private void Button1_Click(object sender, EventArgs e)
        {
            try
            {
                ReadValues();
                BuildGraph();
                if (radioButton1.Checked)
                {
                    CalculateStrongin();
                }

                if (radioButton2.Checked)
                {
                    CalculatePiyavsky();
                }

                if (radioButton3.Checked)
                {
                    CalculateSelection();
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show("Что-то пошло не так: " + ex.Message , "ОШИБКА");
            }

        }

       
    }
}
