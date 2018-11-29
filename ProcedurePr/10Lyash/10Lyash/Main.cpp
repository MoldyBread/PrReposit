
#include <iostream> 
#include "Header.h"

using namespace std;

int main()
{
	const double Pi=3.14159265359;

	double a=2.5,b=5.5;
	
	cout<<"1. M("<<a<<", "<<b<<")"<<endl;
	defVals(a,b);
	cout<<"Simpson: "<<Simpson(0,Pi/2,1e-14,elliptic)<<endl;
	cout<<"Standard: "<<Pi/(2*ellipticSolve())<<endl;
	cout<<endl;

	cout<<"2. Dirichle; a = "<<a<<endl;
	defVals(a);
	cout<<"Simpson: "<<Simpson(0.0001,10000,1e-14,Dirichle)<<endl;
	cout<<"Standard: "<<DirichleSolve()<<endl;
	cout<<endl;

	cout<<"3. Puasson"<<endl;
	cout<<"Simpson: "<<Simpson(0,10000,1e-14,Puasson)<<endl;
	cout<<"Standard: "<<PuassonSolve()<<endl;
	cout<<endl;

	a=0.5;
	cout<<"4. Euler; a = "<<a<<endl;
	cout<<"Works slow, accuracy depends on b variable"<<endl;
	defVals(a);
	cout<<"Simpson: "<<Simpson(0.0001,310,1.e-12,Euler)<<endl;
	cout<<"Standard: "<<EulerSolve()<<endl;


	return 0;
}