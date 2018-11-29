
#include <cmath>

double first(double x)
{
	return sin(x)-x;
}

double second(double x)
{
	return sin(x);
}

double third(double x)
{
	return log(x)-1;
}

double fourth(double x)
{
	return exp(x)-2+x;
}

double dichotomy(double (*f)(double), double a, double b, double eps)
{
	double curr;

	do {
        curr=(a+b)/2;
        if (f(a)*f(curr)<=0)
		{
			b=curr;
		}
        else 
		{
			a=curr;
		}
    }
    while (fabs(a-b)>=eps);

	return curr;
}