
#include <cmath>

using namespace std;

double natln(double x,double eps)
{
	double result = 0;
	double current=x;
	
	for (int i = 1; i < 500; i++)
	{
		result += current;
		if(abs(current)<=eps)
			return result;
		current*=((-1*x)/(i+1));
	}

	return result;
}