#pragma once
#include "VectorND.h"
class MatrixMxN // to MatrixMxN
{
public:
	//	Vector3D row0, row1, row2;
	int Num_M;
	int Num_N;
	std::vector<VectorND> rows_; // choice 2
	//std::vector<VectorND*> rows_; // choice 3

	MatrixMxN(const int & _num_m, const int & _num_n)
	{
		Num_M = _num_m;
		Num_N = _num_n;
	}

	// multiplication of Matrix3x3 and Vector3D
	VectorND operator*(const VectorND& rhs)
	{
		VectorND ans(Num_M);
			for (int j = 0; j < Num_M; j++)
			{
				ans.values_.push_back(rows_[j] * rhs);
			}
		return ans;
	}
};
std::ostream& operator<<(std::ostream& os, const MatrixMxN& vec)
{
	for (int i = 0; i<vec.Num_M; i++)
		os << vec.rows_[i] <<std::endl;
	return os;
}
