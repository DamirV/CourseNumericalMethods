#pragma once
#include <vector>
#include <iostream>
#include <random>
#include <chrono>
//using namespace std;
#define EPS 0.00001

class Functions {
public:
	 double determinant(std::vector<std::vector<double>>A) {
		double result = 1;
		double d = 0;
		std::vector<double> vect = A[0];
		for (int k = 0; k < vect.size(); k++) { // прямой ход
			for (int j = k + 1; j < vect.size(); j++) {
				d = A[j][k] / A[k][k]; // формула (1)
				for (int i = k; i < A.size(); i++) {
					A[j][i] = A[j][i] - d * A[k][i]; // формула (2)
				}
			}
		}
		for (int i = 0; i < A.size(); i++) {
			double tmp = A[i][i];
			result *= tmp;
		}
		return result;
	}

	 double vectorNorm(std::vector<double> a) {
		double norm = 0;
		for (int i = 0; i < a.size(); i++) {
			double tmp = abs(a[i]);
			if (norm < tmp) {
				norm = tmp;
			}
		}
		return norm;
	}

	 std::vector<std::vector<double>> createSpecialMatrix(std::vector<std::vector<double>> A, std::vector<double> B, int pos) {
		for (int i = 0; i < B.size(); i++) {
			A[i][pos] = B[i];
		}
		return A;
	}

	 bool checkForDiagonal(std::vector<std::vector<double>> A) {
		double norm = 0;
		for (int i = 0; i < A.size(); i++) {
			for (int j = 0; j < A[0].size(); j++) {
				norm += A[i][j] * A[i][j];
			}
		}
		if (sqrt(norm) < 1)
			return true;
		else
			return false;
	}

	 std::pair<std::vector<std::vector<double>>, std::vector<double>> makeDiagonal(std::vector<std::vector<double>> A, std::vector<double> B) {

		double d;
		std::pair<std::vector<std::vector<double>>, std::vector<double>> result;
		for (int k = 0; k < A.size(); k++) {
			for (int j = k + 1; j < A[0].size(); j++) {
				d = A[j][k] / A[k][k];
				for (int i = k; i < A.size(); i++) {
					A[j][i] = A[j][i] - d * A[k][i];
				}
				B[j] = B[j] - d*B[k];
			}
		}
		for (int k = A.size() - 1; k >= 0; k--) { // need >=    ?
			for (int j = k - 1; j >= 0; j--) {
				d = A[j][k] / A[k][k];
				for (int i = k; i >= 0; i--) {
					A[j][i] = A[j][i] - d*A[k][i];
				}
				B[j] = B[j] - d*B[k];
			}
		}
		result.first = A;
		result.second = B;
		return result;
	}

	 bool stopIter(std::vector<double> a, std::vector<double>b) {
		std::vector<double>c = a;
		for (int i = 0; i < a.size(); i++) {
			c[i] -= b[i];
		}
		if (vectorNorm(c) < EPS) {
			return false;
		}
		else {
			return true;
		}
	}

	 std::pair<std::vector<std::vector<double>>, std::vector<double>> generateRandomMatrix(int n) {

		std::pair<std::vector<std::vector<double>>, std::vector<double>> pair;
		std::default_random_engine generator(time(0));
		std::uniform_int_distribution <int> distribution(-10, 10);
		std::vector<std::vector<double>> A(n, std::vector<double>(n));
		std::vector<double> B(n);
		double tmp;
		int k = 0;
		for (int i = 0; i < n; i++) {
			double max = A[i][0];
			for (int j = 0; j < n; j++) {
				tmp = distribution(generator);
				if (j < i) {
					A[i][j] = tmp;
					if (abs(tmp) > abs(max)) {
						max = tmp;
						k = j;
					}
				}
				else if (i == j) {
					if (abs(tmp) < abs(max)) {
						A[i][k] = tmp;
						//max = tmp;
						A[i][i] = max;
					}
					else {
						max = tmp;
						A[i][i] = tmp; //max
					}
				}
				else {
					if (abs(tmp) > abs(max)) {
						A[i][j] = A[i][i];
						max = tmp;
						A[i][i] = max;
					}
					else {
						A[i][j] = tmp;
					}
				}
			}
			tmp = distribution(generator);
			B[i] = tmp;
		}
		pair.first = A;
		pair.second = B;
		return pair;
	}
};