
#include <cmath>

const double Pi=3.14159265359;

double fa=1,fb=1;

void defVals(double a=1,double b=1)
{
	fa=a;
	fb=b;
}


double elliptic(const double x)
{
	return 1/sqrt(pow(fa*sin(x),2)+pow(fb*cos(x),2));
}

double ellipticSolve()
{
	double lastB=(fa+fb)/2, lastA=sqrt(fa*fb); 

	do
	{
		fa=lastA;fb=lastB;
		lastB=(fa+fb)/2;
		lastA=sqrt(fa*fb);
    }
	while(lastA<lastB&&lastA>fa&&lastB<fb);

	return lastA;
}

double Dirichle(const double x)
{
	return sin(fa*x)/x;
}

int sgn(double x) 
{
	if (x > 0) return 1;
	if (x < 0) return -1;
	return 0;
}

double DirichleSolve()
{
	return sgn(fa)*Pi/2;
}

double Puasson(const double x)
{
	double const e = 2.71828182846;
	return pow(e,-(x*x));
}

double PuassonSolve()
{
	return sqrt(Pi)/2;
}

double Euler(const double x)
{
	return pow(x,fa-1)/(x+1);
}

double EulerSolve()
{
	return Pi/sin(Pi*fa);
}


double Simpson (const double a, const double b, const double eps, double(*const f)(double))
{
   int n=2;
   double h=(b-a)*0.5;
   double ss=0;
   double s1=h*(f(a)+f(b));
   double s2=0;
   double s4=4*h*f(a+h);
   double s=s1+s2+s4;
   do {
      ss=s;
      n*=2;
      h/=2;
      s1*=0.5;
      s2=0.5*s2+0.25*s4;
      s4=0;
      int i=1;
      do {
         s4=s4+f(a+i*h);
         i+=2;
      }
      while(i<=n);
      s4=4*h*s4;
      s=s1+s2+s4;
   }
   while(fabs(s-ss)>eps);
   return s/3;
}

