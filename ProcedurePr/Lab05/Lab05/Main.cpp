
#include <iostream>
#include "Horner.h"

using namespace std;

int main()
{

	int n=4,x=3;
	double* coeff = new double[n+1];
	fillArray(coeff,n);
	showEq(coeff,n,x);
	cout<<"result: "<<Horner(coeff,n,x)<<"\n"<<endl;

	n=7;x=1;coeff=new double[n+1];
	fillArray(coeff,n);
	showEq(coeff,n,x);
	cout<<"result: "<<Horner(coeff,n,x)<<"\n"<<endl;

	n=5;x=-1;coeff=new double[n+1];
	fillArray(coeff,n);
	showEq(coeff,n,x);
	cout<<"result: "<<Horner(coeff,n,x)<<"\n"<<endl;

	n=2;x=4;coeff=new double[n+1];
	fillArray(coeff,n);
	showEq(coeff,n,x);
	cout<<"result: "<<Horner(coeff,n,x)<<"\n"<<endl;

	n=4;x=10;coeff=new double[n+1];
	fillArray(coeff,n);
	showEq(coeff,n,x);
	cout<<"result: "<<Horner(coeff,n,x)<<"\n"<<endl;

	return 0;
}
