#include <iostream>
#include <chrono>
#include "Header.h"

using namespace std;

int main()
{
	cout.precision(numeric_limits<double>::digits10);

	auto begin = chrono::steady_clock::now();
	cout<<"Power function"<<endl;
	cout<<"a=2, n=3; result: "<<power(2,3)<<endl;
	cout<<"a=10, n=10; result: "<<power(10,5)<<endl;
	cout<<"a=5, n=0; result: "<<power(5,0)<<endl;
	cout<<"a=4, n=14; result: "<<power(4,14)<<endl;
	cout<<"a=7, n=1; result: "<<power(7,1)<<endl;
	auto end = chrono::steady_clock::now();
    auto elapsed_ms = chrono::duration_cast<std::chrono::milliseconds>(end - begin);
	cout<<"Elapsed time: "<<elapsed_ms.count() << " ms\n"<<endl;
	cout<<endl;

	begin = chrono::steady_clock::now();
	cout<<"Quick power function"<<endl;
	cout<<"a=2, n=3; result: "<<quickPower(2,3)<<endl;
	cout<<"a=10, n=10; result: "<<quickPower(10,5)<<endl;
	cout<<"a=5, n=0; result: "<<quickPower(5,0)<<endl;
	cout<<"a=4, n=14; result: "<<quickPower(4,14)<<endl;
	cout<<"a=7, n=1; result: "<<quickPower(7,1)<<endl;
	end = chrono::steady_clock::now();
	elapsed_ms = chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout<<"Elapsed time: "<<elapsed_ms.count() << " ms\n"<<endl;
	cout<<endl;

	begin = chrono::steady_clock::now();
	cout<<"Recursive power function"<<endl;
	cout<<"a=2, n=3; result: "<<recursivePower(2,3)<<endl;
	cout<<"a=10, n=10; result: "<<recursivePower(10,5)<<endl;
	cout<<"a=5, n=0; result: "<<recursivePower(5,0)<<endl;
	cout<<"a=4, n=14; result: "<<recursivePower(4,14)<<endl;
	cout<<"a=7, n=1; result: "<<recursivePower(7,1)<<endl;
	end = chrono::steady_clock::now();
	elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
    cout<<"Elapsed time: "<<elapsed_ms.count() << " ms\n"<<endl;
	cout<<endl;

	begin = chrono::steady_clock::now();
	cout<<"Recursive quickPower function"<<endl;
	cout<<"a=2, n=3; result: "<<recursiveQuickPower(2,3)<<endl;
	cout<<"a=10, n=10; result: "<<recursiveQuickPower(10,5)<<endl;
	cout<<"a=5, n=0; result: "<<recursiveQuickPower(5,0)<<endl;
	cout<<"a=4, n=14; result: "<<recursiveQuickPower(4,14)<<endl;
	cout<<"a=7, n=1; result: "<<recursiveQuickPower(7,1)<<endl;
	end = chrono::steady_clock::now();
	elapsed_ms = chrono::duration_cast<std::chrono::milliseconds>(end - begin);
    cout<<"Elapsed time: "<<elapsed_ms.count() << " ms\n"<<endl;
	cout<<endl;

	cout<<"As we can see the fastest algorithm is recursivePower, also recursive algorithms are faster than iterative";
	return 0;
}

