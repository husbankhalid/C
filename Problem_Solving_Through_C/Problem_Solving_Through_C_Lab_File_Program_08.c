/* Write a program in C to enter a number and reverse its digit to form a new number. */
#include <stdio.h>
int reverse(int);
void main()
{
	int num, rev;
	printf("Enter the number:\n");
	scanf("%d",&num);
	rev=reverse(num);
	printf("Reversed number is: %d",rev);
}
int reverse(int a)
{
	int d, n=0;
	while(a>0)
	{
		d=a%10;
		n=n*10+d;
		a=a/10;
	}
	return n;
}
