/* Write a program in C to enter the size and elements of an array and print out for each element of the array whether it is an even or an odd number by using call by value method of the function. */
#include <stdio.h>

int evenOddTester(int);

int main()

{
	int N,i,flag;
	printf("Enter the size of array:\n");
	scanf("%d",&N);
	int A[N];
	printf("Enter the array elements:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&A[i]);
	}

	for(i=0;i<N;i++)
	{
		flag=evenOddTester(A[i]);

		if(flag==1)
			printf("%d is even.\n",A[i]);
		else
			printf("%d is odd.\n",A[i]);
	}
	return 0;
}

int evenOddTester(int x)
{
	if(x%2==0)
		return 1;
	else
		return 0;
}
