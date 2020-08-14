/* Write a program in C to enter the size and elements of an array and to print out each elements of the array by passing the entire array to the function. */
#include <stdio.h>
void show(int*,int);
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
	show(A,N);
	return 0;
}
void show(int* a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",*(a+i));
	}
}
