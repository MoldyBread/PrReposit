#include <cmath>

using namespace std;

double arctg(double x, double eps)
{
	bool min=false;
	if(x==0)
		return 0;
	if(x<0)
	{
		x*=-1;
		min=true;
	}

	double result=3.14/2;
    double current=-1/x;

    for(int i=0; i<500; i++)
    {
		if(abs(current)<=eps)
			return result;

		result+=current;
        current*=-1/(x*x*(2*i+3)/(2*i+1));
    }

	if(min)
		result*=-1;

	return result;
}





