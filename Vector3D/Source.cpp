#include <iostream>
#include "VectorND.h"
#include "MatrixMxn.h"
int main() 
{
	VectorND vec(4);
	vec.values_.push_back(1);
	vec.values_.push_back(2);
	vec.values_.push_back(3);
	vec.values_.push_back(4);

	VectorND vec1(4);
	vec1.values_.push_back(5);
	vec1.values_.push_back(6);
	vec1.values_.push_back(7);
	vec1.values_.push_back(8);

	VectorND vec2(4);
	vec2.values_.push_back(9);
	vec2.values_.push_back(10);
	vec2.values_.push_back(11);
	vec2.values_.push_back(12);

	VectorND vec3(4);
	vec3.values_.push_back(1);
	vec3.values_.push_back(2);
	vec3.values_.push_back(3);
	vec3.values_.push_back(4);

	VectorND vec4(4);
	vec4.values_.push_back(5);
	vec4.values_.push_back(6);
	vec4.values_.push_back(7);
	vec4.values_.push_back(8);

	MatrixMxN row(5,4);
	row.rows_.push_back(vec);
	row.rows_.push_back(vec1);
	row.rows_.push_back(vec2);
	row.rows_.push_back(vec3);
	row.rows_.push_back(vec4);

	std::cout << "Matrix * Vector:"<<'\n' << std::endl;
	std::cout << row<< std::endl;

	std::cout <<"*"<< vec << std::endl;
	std::cout << "---------" << std::endl;
	std::cout <<"Vector:"<< std::endl;

	VectorND row1(4);
	row1 = row * vec;
	std::cout << row1 << std::endl;

	return 0;
}