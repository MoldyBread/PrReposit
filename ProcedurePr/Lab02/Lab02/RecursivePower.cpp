double recursivePower(double a, int n)
{
	long double result=a;
	if(n==0)
		return 1;		

	return result*recursivePower(a,n-1);
}

double recursiveQuickPower(double a,int n)
{
	if(n==0)
        return 1;

    if(n==1)
        return a;

    if(n>=2){
        double result=recursiveQuickPower(a,n/2);
        return n%2?result*result*a: result*result;
    }
    else
        return 0;
}