
#include <cmath>

double* agaverage(double a,double b)
{
	double lastB=(a+b)/2, lastA=sqrt(a*b); 
	do
	{
		a=lastA;b=lastB;
		lastB=(a+b)/2;
		lastA=sqrt(a*b);
    }
	while(lastA<lastB&&lastA>a&&lastB<b);

	double res[2]={lastA,lastB};
	return res;
}



