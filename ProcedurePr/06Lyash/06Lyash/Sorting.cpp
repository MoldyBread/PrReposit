#include <cassert>
#include <iostream>
#include <ctime>


bool sorted(int* array,size_t size)
{
	for (int i = 0; i < size-1; i++)
	{
		if(array[i]>array[i+1])
			return false;
	}
	return true;
}

bool allElements(int* array,int* sortedArray,size_t size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if(array[i]==sortedArray[j])
				break;

			if(j==size-1)
				return false;
		}
	}
	return true;
}

void sort(int* array,size_t size)
{
	int* tmpar = array;
	int tmp;
	for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
    }

	assert(sorted(array,size));
	assert(allElements(tmpar,array,size));
}


int random(int min, int max)
{
    static bool flag;
    if (!flag)
    {
        srand(time(NULL));
        flag = true;
    }
    return (min + rand() % (max - min));
}

void fillArray(int* array, size_t size)
{ 
	const int first_value=1,last_value=100;

	for (int i = 0; i < size; i++)
	{
		array[i]=random(first_value, last_value);
	}
}



