
#include <iostream>
#include <limits>
#include "Header.h"

using namespace std;

int main()
{
	cout<<"There are a and b in result to check if the limits are equal"<<endl;
	cout.precision(numeric_limits<double>::digits10);
	double a,b;
	double* result;
	a=24;b=6;
	result=agaverage(a,b);
	cout<<"a="<<a<<", b="<<b<<"; result: a="<<result[0]<<", b="<<result[1]<<endl;
	a=2351;b=456;
	result=agaverage(a,b);
	cout<<"a="<<a<<", b="<<b<<"; result: a="<<result[0]<<", b="<<result[1]<<endl;
	a=15;b=2;
	result=agaverage(a,b);
	cout<<"a="<<a<<", b="<<b<<"; result: a="<<result[0]<<", b="<<result[1]<<endl; 
	a=100;b=21;
	result=agaverage(a,b);
	cout<<"a="<<a<<", b="<<b<<"; result: a="<<result[0]<<", b="<<result[1]<<endl;
	a=44;b=44;
	result=agaverage(a,b);
	cout<<"a="<<a<<", b="<<b<<"; result: a="<<result[0]<<", b="<<result[1]<<endl; 

	return 0;
}