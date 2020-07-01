#pragma once
#include<cstdio>
#include<fstream>
#include<string>
#include<map>

class TSpline {
private:
	
	 int size;
	 std::string file;
	 double *a, *b, *c ,*d;
	 double *x, *y, *h;
	 
public:
	TSpline(std::map<double,double> _point, int _size):size(_size) {

		std::map<double, double> point = _point;
		std::map<double, double>::iterator it;
		x = new double[size];
		y = new double[size];

		h = new double[size - 1];
		
		a = new double[size];
		b = new double[size - 1];
		c = new double[size];
		d = new double[size - 1];
		
		int j = 0;
		for (it = point.begin(); it != point.end(); it++) {
			x[j] = it->first;
			y[j] = a[j] = it->second;
			if (j < size - 1) {
				h[j] = (++it)->first - (--it)->first;
			}
			j++;
		}
	}

	~TSpline() {

	}

	void findFunc() {
		double *u, *z, *l, *g;
		
		u = new double[size - 1];
		g = new double[size - 2];
		z = new double[size];
		l = new double[size];

		for (int i = 1; i < size - 1; i++) {
			g[i] = 3.0 / h[i] * (a[i + 1] - a[i]) - 3.0 / h[i - 1] * (a[i] - a[i - 1]);
		}

		l[0] = 1;
		u[0] = z[0] = 0;

		for (int i = 1; i < size - 1; i++) {
			l[i] = 2.0*(x[i + 1] - x[i - 1]) - h[i - 1] * u[i - 1];
			u[i] = h[i] / l[i];
			z[i] = (g[i] - h[i - 1] * z[i - 1]) / l[i];
		}

		l[size - 1] = 1;
		z[size - 1] = c[size - 1] = 0;

		for (int i = size - 2; i >= 0; i--) {
			c[i] = z[i] - u[i] * c[i + 1];
			b[i] = (a[i + 1] - a[i]) / h[i] - (h[i] * (c[i + 1] + 2.0*c[i])) / 3.0;
			d[i] = (c[i + 1] - c[i]) / (3.0*h[i]);
		}

	}

	void printFunc(std::string str) {
		std::ofstream outfile(str);
		for (int i = 0; i < size; i++) {
			outfile << "(" << x[i] << "," << y[i] << ")" << std::endl;
		}
		outfile << std::endl;

		for (int i = 0; i < size - 1; i++) {
			outfile << "P" << i << ": a=" << a[i] << " b=" << b[i] << " c=" << c[i] << " d=" << d[i] << " | " << x[i] <<" <= x <= " << x[i+1] << std::endl;
		}
		outfile << std::endl;

		for (int i = 0; i < size - 1; i++) {
			double coeff0, coeff1, coeff2, coeff3;

			coeff0 = a[i] - b[i] * x[i] + c[i] * x[i]*x[i] - d[i] * x[i] *x[i] *x[i];
			coeff1 = b[i] - 2 * c[i] * x[i] + 3 * d[i] * x[i] * x[i];
			coeff2 = c[i] - 3 * d[i] * x[i];
			coeff3 = d[i];
			
			outfile << "P[" << i << "]= " << coeff0 << " + " << coeff1 << "*x + " << coeff2 << "*x^2 + " << coeff3 << "*x^3" << std::endl;
		}
		outfile << std::endl;
		outfile.close();
	}

	void drawFunc() {
		
	}

	double getX(int i) {
		return x[i];
	}

	double getA(int i) {
		return a[i];
	}

	double getB(int i) {
		return b[i];
	}

	double getC(int i) {
		return c[i];
	}

	double getD(int i) {
		return d[i];
	}
};