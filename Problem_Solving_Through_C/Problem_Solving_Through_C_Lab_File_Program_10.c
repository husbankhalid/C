/* Write a program in C to enter a number in decimal system and convert it into binary number system. */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	system("cls");
	int num, count=0, i, A[100];
	printf("Enter the number:\n");
	scanf("%d",&num);
	while(num>0)
	{
		A[count]=num%2;
		num=num/2;
		count++;
	}
	for(i=count;i>=0;i--)
	{
		if(A[i]==0||A[i]==1)
			printf("%d",A[i]);
	}
	return 0;
}
