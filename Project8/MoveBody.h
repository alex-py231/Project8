#pragma once
using namespace std;
#include <iostream>
#include <cmath>
class MoveBody
{
private:
	bool is_init;
	int n;				// here's the number of our equations
	double* y, * y0, * RHS;
	int N;
	double alpha, dt, v0;
	const double g = 9.81;
	double** arr;
	void Set_init();    // initializing arrays
	void _RHS(int i);
public:
		MoveBody(double v0, double alpha);    // constructor
		void get_arr(double** arr_1);
		int get_n();
		void get_x(float* x);
		void get_y(float* y);
		void Path();
		
};


