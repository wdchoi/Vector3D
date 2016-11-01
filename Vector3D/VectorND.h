#pragma once
#include <iostream>
#include <vector>
class VectorND 
{
public:
	std::vector<int> values_; 
	int num;

	VectorND(const int& _num)
	{
		num = _num;
	}
	VectorND operator+(const VectorND& input) {
		VectorND vec(num);
		for (int i = 0; i < num; i++)
		{
			vec.values_.push_back(this->values_[i] + input.values_[i]);
		}
		return vec;

	}
	int operator*(const VectorND& input) {
		int ans = 0;
		for (int i = 0; i < num; i++)
		{
			ans += this->values_[i] * input.values_[i];
		}
		return ans;
	}
};

std::ostream& operator<<(std::ostream& os, const VectorND& vec)
{
	for (int i = 0; i < vec.num; i++)
		os << vec.values_[i] << " " ;
	return os;
}