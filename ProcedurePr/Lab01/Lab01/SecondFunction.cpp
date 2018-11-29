
#include <cmath>

using namespace std;

double cosin(double x,double eps)
{
    double current = 1;
    double result = 0;

	 for(int i=1; i<500; i++)
    {
		result += current;
		if(abs(current)<=eps)
			return result;

        current *= -1 * x * x / ((2 * i - 1) * (2 * i));
    }
    
    return result;
}
