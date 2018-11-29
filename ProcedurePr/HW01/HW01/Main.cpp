#include <iostream>
#include "First.h"
#include "Second.h"
#include "Third.h"
#include "Fourth.h"
#include "Fifth.h"

using namespace std;

int main()
{
	//First task tests
	cout<<"First task"<<endl;
	cout<<"n=2; x=2; result: "<<firstTask(2,2)<<endl;
	cout<<"n=0; x=1; result: "<<firstTask(0,1)<<endl;
	cout<<"n=10; x=3; result: "<<firstTask(10,3)<<endl;
	cout<<"n=3; x=6; result: "<<firstTask(3,6)<<endl;
	cout<<"n=4; x=5; result: "<<firstTask(4,5)<<endl;
	cout<<" "<<endl;

	//Second task tests
	cout<<"Second task"<<endl;
	cout<<"n=2; x=2; result: "<<secondTask(2,2)<<endl;
	cout<<"n=4; x=3; result: "<<secondTask(4,3)<<endl;
	cout<<"n=6; x=5; result: "<<secondTask(6,5)<<endl;
    cout<<"n=2; x=3; result: "<<secondTask(2,3)<<endl;
	cout<<"n=3; x=0; result: "<<secondTask(10,100)<<endl;
	cout<<" "<<endl;

	//Third task tests
	cout<<"Third task"<<endl;
	cout<<"m/n"<<endl;
	cout<<"q-quotient"<<endl;
	cout<<"r-remainder"<<endl;
	cout<<"m=2; n=2; result: "<<thirdTask(2,2)<<endl;
	cout<<"m=5; n=3; result: "<<thirdTask(5,3)<<endl;
	cout<<"m=10; n=5; result: "<<thirdTask(10,5)<<endl;
	cout<<"m=8; n=1; result: "<<thirdTask(8,1)<<endl;
	cout<<"m=12; n=7; result: "<<thirdTask(12,7)<<endl;
	cout<<" "<<endl;

	//Fourth task tests
	cout<<"Fourth task"<<endl;
	cout<<"Recursive:"<<endl;
	cout<<"n=3; m=3; cheked result: "<<checkFourth(3,3,fourthTaskRecursive(3,3))<<endl;
	cout<<"n=8; m=16; cheked result: "<<checkFourth(8,16,fourthTaskRecursive(8,16))<<endl;
	cout<<"n=28; m=64; cheked result: "<<checkFourth(28,64,fourthTaskRecursive(28,64))<<endl;
	cout<<"Regular:"<<endl;
	cout<<"n=3; m=3; cheked result: "<<checkFourth(3,3,fourthTaskRegular(3,3))<<endl;
	cout<<"n=8; m=16; cheked result: "<<checkFourth(8,16,fourthTaskRegular(8,16))<<endl;
	cout<<"n=28; m=64; cheked result: "<<checkFourth(28,64,fourthTaskRegular(28,64))<<endl;
	cout<<" "<<endl;

	//Fifth task tests
	cout<<"Fifth task"<<endl;
	cout<<"n=2; x=2; result: "<<fifthTask(2,2)<<endl;
	cout<<"n=5; x=4; result: "<<fifthTask(5,4)<<endl;
	cout<<"n=6; x=6; result: "<<fifthTask(6,6)<<endl;
	cout<<"n=3; x=2; result: "<<fifthTask(3,2)<<endl;
	cout<<"n=1; x=0; result: "<<fifthTask(1,0)<<endl;
	return 0;
}

