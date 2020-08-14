/* Write a program in C to enter two numbers and swap them using call by value and call by reference. Print the values of both the variables inside main() before swapping, inside the function after swapping, inside the main() after swapping. */
#include <stdio.h>
void callByValue(int,int);
void callByReference(int*,int*);
int main()
{
	int a, b;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	printf("Call By Value\n");
	printf("Before swapping in main() a = %d and b = %d\n",a,b);
	callByValue(a,b);
	printf("After swapping in main() a = %d and b = %d\n",a,b);
	printf("Call By Reference\n");
	printf("Before swapping in main() a = %d and b = %d\n",a,b);
	callByReference(&a,&b);
	printf("After swapping in main() a = %d and b = %d\n",a,b);
}
void callByValue(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("After swapping in callByValue() a = %d and b = %d\n",x,y);
}
void callByReference(int* x,int* y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("After swapping in callByReference() a = %d and b = %d\n",*x,*y);
}
