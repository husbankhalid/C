/* Write a program in C using structures to enter name, class, roll number, Date of Birth (DD MM YY) and marks of five subjects, and display all the details entered plus his/her total marks, percentage and grade. Grading scheme: >=80% A Grade, 80-60% B Grade, 60-40% C Grade, <40% Fail. Here, DOB is itself a structure consisting of three integer fie… */
#include <stdio.h>
#include <conio.h>
int main()
{
	system("cls");
	struct DOB
	{
		int DD;
		int MM;
		int YY;
	};
	struct student
	{
		char name[20];
		char std[10];
		int roll;
		float marks[5];
		float total;
		float per;
		struct DOB date;
	};
	int i;
	struct student s;
	s.total=0;
	printf("Enter your name:\n");
	scanf("%s",s.name);
	printf("Enter your class:\n");
	scanf("%s",s.std);
	printf("Enter your roll number:\n");
	scanf("%d",&s.roll);
	printf("Enter yor DOB(DD MM YY):\n");
	scanf("%d %d %d",&s.date.DD,&s.date.MM,&s.date.YY);
	for(i=0;i<5;i++)
	{
		printf("Enter marks of %d subject:\n",(i+1));
		scanf("%f",&s.marks[i]);
		s.total=s.total+s.marks[i];
	}
	s.per=s.total/5;
	printf("\n\nName: %s\n",s.name);
	printf("Class: %s\n",s.std);
	printf("Roll Number: %d\n",s.roll);
	printf("Date of Birth: %d/%d/%d\n",s.date.DD,s.date.MM,s.date.YY);
	for(i=0;i<5;i++)
	{
		printf("Marks of %d subject: %f\n",(i+1),s.marks[i]);
	}
	printf("Total Marks: %f\n",s.total);
	printf("Percentage: %f\n",s.per);
	if(s.per>=80)
		printf("Grade A\n");
	else if(s.per>=60&&s.per<80)
		printf("Grade B\n");
	else if(s.per>=40&&s.per<60)
		printf("Grade C\n");
	else
		printf("Grade F\n");
	getch();
	return 0;
}
