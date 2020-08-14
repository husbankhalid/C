/* Write a program in C to enter two integers and swap their values.*/
#include <stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter two numbers:");
	printf("\n");
	scanf("%d %d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping a = %d and b = %d",a,b);
	return 0;
}
