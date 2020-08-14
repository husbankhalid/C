/* Write a program in C to enter the array elements according to the size specified by the user and perform insertion operation. Position of insertion (starting from 1) and the element to be inserted are given as input.*/
#include <stdio.h>
void main()
{
	int a[20],i,n,pos,item;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the positions of element:\n");
	scanf("%d",&pos);
	printf("Enter the new element:\n");
	scanf("%d",&item);
	for(i=n;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=item;
	for(i=0;i<n;i++)
	{
		printf("\n%d\n",a[i]);
	}
}
