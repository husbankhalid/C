/* Write a program in C to enter the age of user and print whether user is adult.*/
#include <stdio.h>
int main()
{
	int age;
	printf("Enter you age:\n");
	scanf("%d",&age);
	if(age>=18)
		printf("You are adult");
	else
		printf("You are not adult");
	return 0;
}
