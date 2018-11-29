double quickPower(double a, int n)
{
	long double result=1;

	while(n>0)
	{
		if(n%2!=0)
		{
			--n;
			result*=a;
		}
		else
	    {
			n/=2;
		   a*=a;
	    }
	}
	return result;
}