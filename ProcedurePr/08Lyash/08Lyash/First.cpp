

void zet(double &y, double &x, unsigned int &k,unsigned int counter=0)
{
  
	++counter;//Counter of calling zet()
	if (k>0)
	{
		if (k%2==1)
		{
			y*=x; k--;
		}
		else
		{
			x*=x; k/=2;
		};
		zet(y,x,k,counter);
	}
		
}

double power(double x, unsigned int n)
{
	double y =1;
	zet(y, x, n);
	return y;
}