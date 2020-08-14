/* Write a program in C to enter a line of sentence and count the number of word(s) and number of vowels present in it. */

#include <stdio.h>
#include <conio.h>
int main()
{
	system("cls");
	int i=0,spaces=0,vowels=0;
	char c[100];
	printf("Enter a line of text:\n");
	gets(c);
	while(c[i]!='\0')
	{
		if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')
		{
			vowels++;
		}
		if(c[i]==' ')
			spaces++;

		i++;
	}
	printf("\n\nNo. of Vowels: %d\n",vowels);
	printf("No. of Words: %d\n",spaces+1);
	getch();
	return 0;
}
