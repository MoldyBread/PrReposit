
#include "Horner.h"
#include <cassert>
#include <iostream>
#include <ctime>

void fillArray(double * coeff, size_t size)
{ 
	const int first_value=-100,last_value=100;
	for (int i = 0; i < size; i++)
	{
		coeff[i]=random(first_value, last_value);
	}
}

void showEq(double * coeff, size_t size,double x)
{
	std::cout<<"x="<<x<<std::endl;
	for (int i = size-1,j=0; j<size ; i--,j++)
	{
		std::cout<<"("<<coeff[j]<<"*x^"<<i<<")";
		if(j!=size-1)
			std::cout<<"+";
		else
			std::cout<<std::endl;
	}
}

double sum(double * coeff, size_t size, int sign)
{
	double result=0;
	int x=1;

	for (int i = size-1; i >=0 ; i--)
	{
		result+=coeff[i]*x;
		x*=sign;
	}

	return result;
}


double Horner(double * coeff, size_t size, double x)
{
	double result=coeff[0];
	for (int i = 0; i < size-1; i++)
	{
		result*=x;
		result+=coeff[i+1];
	}

	assert(((x==1)||(x==-1))?(abs(result - sum(coeff, size, x)) < 0.001):true);
	
	return result;
}


double random(int min, int max)
{
    static bool flag;
    if (!flag)
    {
        srand(time(NULL));
        flag = true;
    }
    return (min + rand() % (max - min))/10.0;
}

