#include <iostream>
#include <sstream>

using namespace std;

int fourthTaskRecursive(int n,int m);
int fourthTaskRegular(int n, int m);
string checkFourth(int n,int m, int sol);

int fourthTaskRecursive(int n,int m)
{
	if (m == 0)
    return n;

  return fourthTaskRecursive(m, n % m);
}

int fourthTaskRegular(int n, int m)
{
	while(n!=0&&m!=0)
	{
		if(n>m)
			n%=m;
		else
			m%=n;
	}
	
	return m+n;
}

string checkFourth(int n,int m, int sol)
{
	if(n%sol==0&&m%sol==0)
	{
		if(n>m)
		{
			for (int i = sol+1; i < m; i++)
			{
				if(n%i==0 && m%i==0)
					return "Something wrong";
			}
		}
		else
		{
			for (int i = sol+1; i < n; i++)
			{
				if(n%i==0 && m%i==0)
					return "Something wrong";
			}
		}

		stringstream ss;
		ss <<sol;
		string s;
		ss>>s;
		return s;

	}
	else
	{
		return "Something wrong";
	}

}