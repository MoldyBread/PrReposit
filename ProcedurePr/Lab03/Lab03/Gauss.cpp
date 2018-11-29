

#include <cmath>

double gauss(double x,double e) 
{       
    double current=x,i=0, res=0;
    do 
	{
        res+=current;
        current*=-x*x*(2*i+1)/(2*i+3)/(i+1);     
        i++;
	}
	while(abs(current)>e);
	return res;
}

double gaussAn(double x,double e)
{
	if(x<0)
		x=-x;
	double sum=0;
	double f = x;
	int n = 0;

	do
	{
		sum+=f;
		f*=-x*x*(2*n+1) / ((2*n+3)*(n+1));
		n++;
	}
	while (abs(f) > e);
	
	return sum;
}
