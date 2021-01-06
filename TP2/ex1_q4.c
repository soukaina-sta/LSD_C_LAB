#include<stdio.h>
double f(double x)
{
	return x;
}
double simpson(double(*f)(double),double a,double b,int n)
{
	float h=(b-a)/n;
	double x=a+h;
	double z=a+h/2;
	double I1=0;
	double I2=f(z);
	for(int i=0; i<n-1; i++)
	{
		z=z+h;
		I1=I1+f(x);
		I2=I2+f(z);
		x=x+h;
	}
	return (h/6)*(f(a)+f(b)+2*I1+4*I2);
}
int main()
{
	double s;
	double a=0;
	double b=1;
	int n=100;
	s=simpson(f,a,b,n);
	printf("le resultat est %f",s);
	return 0;
}

