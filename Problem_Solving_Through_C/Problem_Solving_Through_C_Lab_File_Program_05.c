/* Write a program in C to enter two numbers and perform addition, subtraction, multiplication or division according to the choice entered by the user. Use switch-case. */
#include <stdio.h>
int main()
{
	int a, b, ans, ch;
	printf("Enter the first number:\n");
	scanf("%d",&a);
	printf("Enter the second number:\n");
	scanf("%d",&b);
	printf("Choice:\n");
	printf(" 1. Add\n 2. Subtraction\n 3. Product\n 4. Division\n");
	printf("Enter you choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			ans=a+b;
			printf("Sum of %d and %d is %d",a,b,ans);
			break;
		case 2:
			ans=a-b;
			printf("Subtraction of %d and %d is %d",a,b,ans);
			break;
		case 3:
			ans=a*b;
			printf("Product of %d and %d is %d",a,b,ans);
			break;
		case 4:
			ans=a/b;
			printf("Division of %d and %d is %d",a,b,ans);
			break;
		default:
			printf("Invalid Choice !");
	}
}
