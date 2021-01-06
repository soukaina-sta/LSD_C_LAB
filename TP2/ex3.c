#include<stdio.h>
#include<stdlib.h>
double f(double x)
{
	return x ;
}
double simpson(double(*f)(double),double a,double b,int n)
{
	float h=(b-a)/n;
	double x=a+h;
	double z=(a+h)/2;
	double integ1=0;
	double integ2=f(z);
	for(int i=0;i++;i<n-1)
	{
		z=z+h;
		integ1=integ1+f(x);
		integ2=integ2+f(x);
		x=x+h;
	}
	return (h/6)*(f(a)+f(b)+2*integ1+4*integ2);
}

double nombrenecessaire(double(*f)(double),double a ,double b,double(*meth)(double(*f)(double),double ,double ,int ),double Err,double I)
{
int n=0;
while (abs(meth(f,a,b,n)-I)>Err);
n=n+1;
return n ;
}
int main()
{
	double I=0.5;
	double a=0;
	double b=1;
	I=nombrenecessaire(f,a,b,simpson,0.01,I);
	printf("les résultats sont %f", I);
	return 0;
}

