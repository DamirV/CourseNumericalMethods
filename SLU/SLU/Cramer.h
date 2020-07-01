#pragma once
#include <vector>
#include "Functions.h"

class Cramer {
public:
	Functions f;
	 std::vector<double> cramerMethod(std::vector<std::vector<double>> A, std::vector<double> B) {
		std::vector<double> result(B.size());
		std::vector<double> coefdet(B.size());
		double det = f.determinant(A);
		for (int i = 0; i < A.size(); i++) {
			coefdet[i] = f.determinant(f.createSpecialMatrix(A, B, i));
			result[i] = coefdet[i] / det;
		}
		return result;
	}
};
