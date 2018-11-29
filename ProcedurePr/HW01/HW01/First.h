#include <iostream>

using namespace std;

double firstTask(int n,int x);





double firstTask(int n,int x)
{
	double a1=1,a2=1,a3=1;
	double sum=1;

	for (int i = 1; i <= n; i++)
	{
		a1*=-1;
		a2*=x;
		a3*=i;
		sum+=(a1*a2)/a3;
	}
	return sum;
}









