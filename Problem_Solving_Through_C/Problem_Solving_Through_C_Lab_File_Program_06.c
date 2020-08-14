/* Write a program in C to print out Fibonacci series upto the term specified by the user.*/
#include <stdio.h>
int main()
{
	int first=1, second=1, m, fib=1;
	printf("Enter the number:\n");
	scanf("%d",&m);
	printf("1\n");
	do
	{
		printf("%d\n",fib);
		fib=first+second;
		first=second;
		second=fib;
	}
	while(fib<m);
}
