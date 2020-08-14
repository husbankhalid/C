/* Write a program in C to enter the array elements according to the size specified by the user and perform deletion operation. Position of the element to be deleted is given as input. */
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
	printf("\n");
	for(i=pos;i<n;i++)
	{
		a[i-1]=a[i];
	}
	for(i=0;i<n-1;i++)
	{
		printf("%d\n",a[i]);
	}
}
