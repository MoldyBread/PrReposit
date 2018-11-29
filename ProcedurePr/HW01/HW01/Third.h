#include <iostream>
#include <sstream>

using namespace std;

string thirdTask(int m,int n);

string thirdTask(int m,int n)
{
	int q=0, r=m;
	while(r>=n)
	{
		r-=n;
		q+=1;
	}

	    stringstream ss,st;
		ss << q;
		st << r;
		string s,s1;
		ss>>s;
		st>>s1;
		s="q="+s;
		s1="r="+s1;
		return s+" "+s1;
}