#include "MoveBody.h"

MoveBody::MoveBody(double v0, double alpha)
{
	N = 4;
	dt = 0.01;
	this->n = 2 * v0 * sin(alpha) / g / dt;
	y = new double[N];
	y0 = new double[N];
	RHS = new double[N];
	arr = new double* [n];
	for (int i = 0;i < n;i++)
	{
		arr[i] = new double[N];
	}
	
	this->alpha = alpha;
	this->v0 = v0;
	this->n = n;
	is_init = false; 
	
}

void MoveBody::get_arr(double** arr_1)
{
	for (int i = 0; i < this->N; i++)
	{
		for (int j = 0; j < this->n; j++)
		{
			arr_1[i][j] = this->arr[i][j];
		}
	}
}

int MoveBody::get_n()
{
	return this->n;
}

void MoveBody::get_x(float* x)
{
	for (int i = 0; i < n; i++)
	{
		x[i] = arr[i][0];
	}
}

void MoveBody::get_y(float* y)
{
	for (int i = 0; i < n; i++)
	{
		y[i] = arr[i][1];
	}
}

void MoveBody::Set_init()
{
	y0[0] = 0;
	y0[1] = 0;
	y0[2] = v0 * cos(alpha);
	y0[3] = v0 * sin(alpha);
	for (int i = 0; i < N; i++)
	{
		arr[0][i] = y0[i];
	}
	is_init = true;
}

void MoveBody::_RHS(int i)
{
	RHS[0] = y0[2];

	RHS[1] = y0[3] - g * dt *(i+1);
	RHS[2] = 0;
	RHS[3] = -g;
}

void MoveBody::Path()
{
	Set_init();
		for (int i = 0; i < (n - 1); i++)
		{
			_RHS(i);
			for (int j = 0; j < N; j++)
			{
				arr[i + 1][j] = arr[i][j] + RHS[j] * dt;
				
			}
			if (arr[i + 1][1] < 0)
			{
				n = i + 1;
				return;
			}
		}
}


