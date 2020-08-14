/*Write a program in C to enter four numbers and print the largest number.*/
#include <stdio.h>
int main()
{
	int a,b,c,d,max=0;
	printf("Enter four numbers separated by space:\n");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>max)
		max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	if(d>max)
		max=d;
	printf("Largest number is: %d",max);
	return 0;
}
