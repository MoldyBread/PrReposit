
#include <iostream>
#include <limits>
#include "Functions.h" 

using namespace std;

int main()
{
	cout.precision(std::numeric_limits< double >::max_digits10);
	const double Pi=3.14159265358979323846;

	cout<<"Dichotomy"<<endl;
	cout<<"1. sin(x)=x [-1, 1];   x = "<<dichotomy(first,-1,1,1e-14)<<endl;
	cout<<"2. sin(x)=0 [Pi-1, Pi];   x = "<<dichotomy(second,Pi-1,Pi,1e-14)<<endl;
	cout<<"3. ln(x)=1, [2, 3];   x = "<<dichotomy(third,2,3,1e-14)<<endl;
	cout<<"4. exp(x)=2-x, [0, 2];   x = "<<dichotomy(fourth,0,2,1e-14)<<endl;

	return 0;
}