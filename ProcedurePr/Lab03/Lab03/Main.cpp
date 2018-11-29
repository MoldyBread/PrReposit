

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{

	cout.precision(numeric_limits<double>::digits10);
	cout<<"Gauss"<<endl;
	for (int i = 1; i <= 10; i++)
	{
		cout<<"x="<<i<<", eps=0.0001; result: "<<gauss(i,0.0001)<<"; Gauss igr: "<<gaussAn(i,0.0001)<<"; Exp (line): "<<expx(i,0.0001)<<endl;
	}
	cout<<endl;


	cout<<"Exponent(ratio)"<<endl;
	for (int i = -5; i <= 5; i++)
	{
		cout<<"x="<<i<<"; Exp (line): "<<expnmy(i)<<"; Exp (cmath pow): "<<exp(i)<<"; Cmath Exp: "<<exp(i)<<endl;
	}
	return 0;
}