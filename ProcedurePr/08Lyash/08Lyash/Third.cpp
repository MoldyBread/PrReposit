
#include "Main.h"

Vector2 operator*(Matrix2x2 matrix,Vector2 vector)
{
	Vector2 res = {matrix._11*vector._1+matrix._12*vector._2,matrix._21*vector._1+matrix._22*vector._2};
	return res;
}

Matrix2x2 operator* (Matrix2x2 m1,Matrix2x2 m2)
{
	Matrix2x2 res = {m1._11*m2._11+m1._12*m2._21,  m1._11*m2._12+m1._12*m2._22,  m1._21*m2._11+m1._22*m2._21, m1._21*m2._12+m1._22*m2._22};
	return res;
}

const Matrix2x2 quickPower(const Matrix2x2& base, const int exponent, const Matrix2x2& y) 
{
	 if(exponent==0) 
		 return y;

	 if(exponent%2==0)
		 return quickPower(base*base, exponent/2, y);

	 return quickPower(base, exponent-1, y*base);
}



int quickFib(int n) 
{
	if(n==0)
		return 0;

	const Matrix2x2 unitMatrix={1,0,0,1}, fibMatrix={1,1,1,0}; 
    const Vector2 fibVector={1, 0};
	Vector2 res=quickPower(fibMatrix, n-1, unitMatrix)*fibVector;
	return res._1;
} 
