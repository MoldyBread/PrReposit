
#include <iostream>
#include <chrono>
#include "Main.h"

using namespace std;

int main()
{
	cout<<"1. Tests of power recursive function"<<endl;
	double x=2;int n=3;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	x=3;n=3;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	x=10;n=5;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	x=5;n=8;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	x=9;n=0;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	x=4;n=1;
	cout<<x<<'^'<<n<<" = "<<power(x,n)<<endl;
	cout<<endl;
	
	cout<<"2. Tests of Fibonacci recursive function"<<endl;
	for (n = 0; n <= 10; n++)
	{
		cout<<"F("<<n<<") = "<<Fibonaci(n)<<endl;
	}
	cout<<endl;

	cout<<"3. Tests of quick Fibonacci recursive function"<<endl;
	for (n = 0; n <= 10; n++)
	{
		cout<<"F("<<n<<") = "<<quickFib(n)<<endl;
	}
	cout<<endl;
	return 0;
}