
#include <iostream>
#include <chrono>

#include "Fibonacci.h"

using namespace std;

int main()
{
	cout<<"Fibonacci"<<endl;
	cout<<endl;
	int tm=0;
	for (int i = 0; i < 10; i++)
	{
		auto begin = chrono::steady_clock::now();	
	for (int i = 0; i <= 10; i++)
	{
		cout<<"F("<<i<<") = "<<fibonacci(i)<<endl;
	}
	auto end = chrono::steady_clock::now();
    auto elapsed_ms = chrono::duration_cast<chrono::milliseconds>(end - begin);
    cout << "The time: " << elapsed_ms.count() << " ms"<<endl;
	tm+=elapsed_ms.count();
	}
	cout<<tm/10<<endl;
	
	return 0;
}