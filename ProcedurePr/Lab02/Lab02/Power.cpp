double power(double a, int n)
{
	long double result=a;
	if(n!=0)
	for (int i = 1; i < n; i++)
	{
		result*=a;
	}
	else
		return 1;

	return result;
}