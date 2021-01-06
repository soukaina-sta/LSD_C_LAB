#include<stdio.h>
#include<stdlib.h>
double f(double x)
{
     	return x;
}
double rectangledroit(double(*f)(double),double a,double b,int n)
{
	float h=(b-a)/n;
	double s=0;
	double c;
	for(int i=1; i<n+1; i++)
	{
		s+=f(a+i*h);
	}
	return s*h;
}
int main()
{
	double integrale;
	double a=0;
	double b=1;
	int n=100;
	integrale=rectangledroit(f,a,b,n);
	printf("les resultats sont %f ",integrale);
	return 0;
}

