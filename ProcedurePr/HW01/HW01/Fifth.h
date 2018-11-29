#include <iostream>

using namespace std;

int fifthTask(int n,int x);

int fifthTask(int n,int x)
{
	int result=0;
	int l1=x,l2=1;
	if(n==0)
		return 1;
	if(n==1)
		return x;


	for (int i = 2; i <= n; i++)
	{
		result = 2*x*l1-l2;
		l2=l1;
		l1=result;
	}

	return result;

}