
#include <iostream>
#include <cmath>
#include "Header.h"


using namespace std;


int main()
{


	cout<<"1) Arctg "<<endl;
	cout<<"x = -1, epsilon = 0.001; result = "<<arctg(-1,0.001)<<"; cmath func = "<<atan(-1)<<endl;
	cout<<"x =0.5, epsilon = 0.002; result = "<<arctg(0.5, 0.002)<<"; cmath func = "<<atan(0.5)<<endl;
	cout<<"x = 30, epsilon = -0.00001; result = "<<arctg(30, -0.00001)<<"; cmath func = "<<atan(30)<<endl;
	cout<<"x = 150, epsilon = 0.00003; result = "<<arctg(150, 0.00003)<<"; cmath func = "<<atan(150)<<endl;
	cout<<"x = 0, epsilon = 0.00001; result = "<<arctg(0, 0.01)<<"; cmath func = "<<atan(0)<<endl;
	cout<<endl;

	cout<<"2) Cos  ( good values for x => [-34,34] )"<<endl;
	cout<<"x = -1, epsilon = 0.001; result = "<<cosin(-1,0.001)<<"; cmath func = "<<cos(-1)<<endl;
	cout<<"x = 12, epsilon = 0.0002; result = "<<cosin(12,0.0002)<<"; cmath func = "<<cos(12)<<endl;
	cout<<"x = 0, epsilon = 0.001; result = "<<cosin(0,0.001)<<"; cmath func = "<<cos(0)<<endl;
	cout<<"x = 35, epsilon = 0.01; result = "<<cosin(34,0.01)<<"; cmath func = "<<cos(34)<<endl;
	cout<<"x = -34, epsilon = 0.0001; result = "<<cosin(-34,0.0001)<<"; cmath func = "<<cos(-34)<<endl;
	cout<<endl;

	cout<<"3) ln(1+x)  ( x => (-1;1] ) "<<endl;
	cout<<"x = 1, epsilon = 0.0001; result = "<<natln(1,0.0001)<<"; cmath func = "<<log(2)<<endl;
	cout<<"x = 0, epsilon = 0.001; result = "<<natln(0,0.001)<<"; cmath func = "<<log(1)<<endl;
	cout<<"x = 0.5, epsilon = 0.1; result = "<<natln(0.5,0.1)<<"; cmath func = "<<log(1.5)<<endl;
	cout<<"x = -0.1, epsilon = 0.000001; result = "<<natln(-0.1,0.000001)<<"; cmath func = "<<log(0.9)<<endl;


	

	return 0;
}



