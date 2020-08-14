/* Write a program in C to enter the number of rows and columns of two arrays, enter the elements of both the arrays and carry out array multiplication, if possible. */
#include <stdio.h>
void main()
{
	int R1,C1,R2,C2,i,j,k;
	printf("Enter the row of first matrix:\n");
	scanf("%d",&R1);
	printf("Enter the column of first matrix:\n");
	scanf("%d",&C1);
	printf("Enter the row of second matrix:\n");
	scanf("%d",&R2);
	printf("Enter the column of second matrix:\n");
	scanf("%d",&C2);
	if(C1!=R2)
	{
		printf("Arrays are not multiplicable\n");
	}

	int X[R1][C1], Y[R2][C2],W[R1][C2];

	for(i=0;i<R1;i++)
	{
		printf("Enter row: %d of first matrix\n",(i+1));
		for(j=0;j<C1;j++)
		{
			scanf("%d",&X[i][j]);
		}
	}
	for(i=0;i<R2;i++)
	{
		printf("Enter row: %d of second matrix\n",(i+1));
		for(j=0;j<C2;j++)
		{
			scanf("%d",&Y[i][j]);
		}
	}
	for(i=0;i<R1;i++)
	{
		for(j=0;j<R2;j++)
		{
			W[i][j]=0;
			for(k=0;k<C1;k++)
			{
				W[i][j]=W[i][j]+X[i][k]*Y[k][j];
			}
		}
	}
	printf("\n");
	printf("Product of arrays is:\n");
	for(i=0;i<R1;i++)
	{
		for(j=0;j<C2;j++)
		{
			printf("%d ",W[i][j]);
		}
		printf("\n");
	}
}	
