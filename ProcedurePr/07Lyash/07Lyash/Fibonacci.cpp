

#include "Fibonacci.h"

Vector2 operator*(Matrix2x2 matrix,Vector2 vector)
{
	Vector2 res = {matrix._11*vector._1+matrix._12*vector._2,matrix._21*vector._1+matrix._22*vector._2};
	return res;
}

Matrix2x2 operator*(Matrix2x2 m1,Matrix2x2 m2)
{
	Matrix2x2 res = {m1._11*m2._11+m1._12*m2._21,  m1._11*m2._12+m1._12*m2._22,  m1._21*m2._11+m1._22*m2._21, m1._21*m2._12+m1._22*m2._22};
	return res;
}

Matrix2x2 matrixPow(Matrix2x2 matrix,int n)
{
	if(!n)
	{ 
		Matrix2x2 zero = {1,0,1,0};
		return zero;
	}
	else 
		return matrix*matrixPow(matrix,n-1);
}

long fibonacci(int n)
{
	Matrix2x2 matrix={1,1,1,0};
	Vector2 vector={1,0};
	
	if(n==0)
		return 0;
	else
	{
		vector = matrixPow(matrix,n-1)*vector;
		return vector._2;
	}
}

