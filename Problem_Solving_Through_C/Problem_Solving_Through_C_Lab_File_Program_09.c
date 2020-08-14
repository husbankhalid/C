/* Write a program in C to enter two numbers and add them using functions. */
#include <stdio.h>
int sum(int,int);
void main()
{
	int x,y,ans;
	printf("Enter the first number:\n");
	scanf("%d",&x);
	printf("Enter the secon number:\n");
	scanf("%d",&y);
	ans=sum(x,y);
	printf("Sum is: %d",ans);
}
int sum(int a, int b)
{
	int sum = a+b;
	return sum;
}
