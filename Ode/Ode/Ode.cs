using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Ode
{
    class Ode
    {
        private double a = 1;
        private double b = 0;
        double F(double x, double y)
        {
            //return a * x * x * y + b;
            return x * x - 2 * y;
        }
        public void setab(double _a, double _b) {
            a = _a;
            b = _b;
        }

       public double[] ode(double x0, double y0, double a, double b, double h)
        {
            int n = (int)((b - a) / h);
            double[] X = new double[n];
            double[] K1 = new double[n];
            double[] K2 = new double[n];
            double[] K3 = new double[n];
            double[] K4 = new double[n];
            double[] Y = new double[n];

            X[0] = x0; Y[0] = y0;
            for (int i = 1; i < n; i++)
            {
                X[i] = a + i * h;
                K1[i] = h * F(X[i - 1], Y[i - 1]);
                K2[i] = h * F(X[i - 1] + h / 2.0, Y[i - 1] + K1[i] / 2.0);
                K3[i] = h * F(X[i - 1] + h / 2, Y[i - 1] + K2[i] / 2);
                K4[i] = h * F(X[i - 1] + h, Y[i - 1] + K3[i]);
                Y[i] = Y[i - 1] + (K1[i] + 2 * K2[i] + 2 * K3[i] + K4[i]) / 6;
            }
            return Y;
        }

        double F1(double x, double y, double t)
        {
            return y;
        }

        double F2(double x, double y, double t)
        {
            return -x;
        }

        public void ode(double x0, double y0, double t0, double start, double stop, double h)
        {
            int n = (int)((stop - start) / h);
            double[] X = new double[n];
            double[] T = new double[n];
            double[] K1 = new double[n];
            double[] K2 = new double[n];
            double[] K3 = new double[n];
            double[] K4 = new double[n];
            double[] M1 = new double[n];
            double[] M2 = new double[n];
            double[] M3 = new double[n];
            double[] M4 = new double[n];
            double[] Y = new double[n];

            X[0] = x0; Y[0] = y0; T[0] = t0;
        }

    }
}
