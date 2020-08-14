/* Write a program in C to enter the size and elements of an array and to print out each elements of the array by using call by value method of the function. */

#include <stdio.h>
void show(int);
int main()
{
	int N,i;
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
		show(A[i]);
	}
	return 0;
}
void show(int x)
{
	printf("%d ",x);
}
