#pragma once
#include "Functions.h"
#include <vector>
#include <iostream>

class ProstIteration {
public:
	Functions f;
	 std::vector<double> prostIterMethod(std::vector<std::vector<double>> A, std::vector<double> B) { //будут нужны условия ждля проверки сходимости
		std::pair<std::vector<std::vector<double>>, std::vector<double>> pair;
		std::vector<double> result(A.size());
		result.assign(result.size(), 0);

		std::vector<std::vector<double>> _A = A;
		std::vector<double> _B = B;

		for (int i = 0; i < A.size(); i++) {
			if (A[i][i] != 0) { //вот здесь проверка на 0 и умножение на -1
				for (int j = 0; j < A.size(); j++) {
					if (i != j) {
						A[i][j] /= -A[i][i];
					}
				}
				B[i] /= A[i][i];
				A[i][i] = 0;
			}
		}

		std::vector<double> cur_iter(A.size());
		std::vector<double> prev_iter(A.size());
		int count = 0;
		if (f.checkForDiagonal(A)) {
			prev_iter.assign(prev_iter.size(), 0);
			for (int i = 0; i < A.size(); i++) {
				for (int j = 0; j < A.size(); j++) {
					cur_iter[i] = +A[i][j] * prev_iter[i];
				}
				cur_iter[i] += B[i];
			}
			count++;
			while (f.stopIter(cur_iter, prev_iter)) {
				prev_iter = cur_iter;
				cur_iter.assign(A.size(), 0);
				for (int i = 0; i < A.size(); i++) {
					for (int j = 0; j < A.size(); j++) {
						cur_iter[i] += A[i][j] * prev_iter[j];
					}
					cur_iter[i] += B[i];
				}
				count++;
			}

			result = cur_iter;
		}
		else {

			pair = f.makeDiagonal(_A, _B);
			for (int i = 0; i < pair.first.size(); i++) {
				result[i] = pair.second[i] / pair.first[i][i];
			}
		}

		return result;
	}
};