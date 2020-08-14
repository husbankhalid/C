/* Write a program in C to find the nature and root(s) of the quadratic equation. Coefficient a, b, c of the quadratic equation are given as input. */
#include <stdio.h>
#include <math.h>
void main()
{
	int a, b, c, d;
	float x, y;
	printf("Enter a:\n");
	scanf("%d",&a);
	printf("Enter b:\n");
	scanf("%d",&b);
	printf("Enter c:\n");
	scanf("%d",&c);
	d=(b*b)-(4*a*c);
	if(d==0)
	{
		printf("Roots are real and equal\n");
		x=-(b/(2*a));
		printf("Roots: %f",x);
	}
	if(d>0)
	{
		printf("Roots are real\n");
		x=(((-b)+sqrt(d))/(2*a));
		y=(((-b)-sqrt(d))/(2*a));
		printf("Roots are %f and %f",x,y);
	}
	if(d<0)
	{
		printf("Roots are imaginary\n");
	}
}
