/* Write a program in C which shows the use of String functions – strlen(), strcat(), strcpy(), strcmp(), strrev(). */
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	system("cls");
	char S1[50], S2[50], S3[50], S4[50];
	printf("Enter first string:\n");
	gets(S1);
	printf("Enter second string:\n");
	gets(S2);
	printf("\n\nString1: %s\n",S1);
	printf("Length of String1: %d\n",strlen(S1));
	printf("Copying S1 to S3\n");
	strcpy(S3,S1);
	printf("S3: %s\n",S3);
	printf("Concatenating S1 and S2: %s\n",strcat(S1,S2));
	printf("Reverse of S3: %s\n",strrev(S3));
	getch();
	return 0;
}
