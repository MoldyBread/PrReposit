#include <iostream>

using namespace std;

double secondTask(int n,int x);

double secondTask(int n,int x)
{
	double a1=1,a2=x,a3=1;
	int k=0;
	double sum=x;

	for (int i = 1; i <= n; i++)
	{
		a1*=-1;
	    a2*=x;
		a2*=x;

		a3*=((i+k+1)*(i+k+2));
		k++;
		
		sum+=(a1*a2)/a3;
	}

	return sum;
}