#include<stdio.h>
#include<stdlib.h>
double f(double x)
{
     	return x;
}
double rectanglegauche(double(*g)(double),double a,double b,int n)
{
	float h=(b-a)/n;
	double s=0;
	for(int i=0; i<n+1; i++)
	{
		s+=g(a+i*h);
	}

	return s*h;
}
int main()
{
	double integrale;
	double a=0;
	double b=1;
	int n=100;
	integrale=rectanglegauche(f,a,b,n);
	printf("les resultats sont %f ",integrale);
	return 0;
}

