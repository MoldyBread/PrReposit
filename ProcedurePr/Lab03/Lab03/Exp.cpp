
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
#include "Header.h"


double expn(double x)
{
	if(x<0)
	{
		x=-x;
		return 1/pow(M_E,x);
	}
	else
	{
		double fractpart, intpart; 
		fractpart = modf(x , &intpart);
		return pow(M_E,fractpart)*pow(M_E,intpart);
	}
}

double expnmy(double x)
{
	if(x<0)
	{
		x=-x;
		return 1/expx(x,0.000000000001);
	}
	else
	{
		double fractpart, intpart; 
		fractpart = modf(x , &intpart);
		return expx(fractpart,0.000000000001)*expx(intpart,0.000000000001);
	}
}

double expx(double x,double eps)
{
    double res=1;
    double current=1;
    for (int i=1; abs(current)>=eps; i++)
    {
        current*=(x/i);
        res+=current;
    }
	return res;
}