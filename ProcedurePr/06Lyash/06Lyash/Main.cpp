//

#include <iostream>
#include "Sorting.h"

using namespace std;

void printArray(int array[],size_t size)
{
	for (int i = 0; i < size; i++)
	{
		cout<<array[i]<<' ';
	}
	cout<<endl;
}

int main()
{
	int n=5;
	int* array = new int[n];
	fillArray(array,n);
	cout<<"Start array: ";printArray(array,n);
	sort(array,n);
	cout<<"Sorted array: ";printArray(array,n);
	cout<<endl;

	n=9;
	array = new int[n];
	fillArray(array,n);
	cout<<"Start array: ";printArray(array,n);
	sort(array,n);
	cout<<"Sorted array: ";printArray(array,n);
	cout<<endl;

	n=3;
	array = new int[n];
	fillArray(array,n);
	cout<<"Start array: ";printArray(array,n);
	sort(array,n);
	cout<<"Sorted array: ";printArray(array,n);
	cout<<endl;

	n=15;
	array = new int[n];
	fillArray(array,n);
	cout<<"Start array: ";printArray(array,n);
	sort(array,n);
	cout<<"Sorted array: ";printArray(array,n);
	cout<<endl;

	n=50;
	array = new int[n];
	fillArray(array,n);
	cout<<"Start array: ";printArray(array,n);
	sort(array,n);
	cout<<"Sorted array: ";printArray(array,n);


	return 0;
}