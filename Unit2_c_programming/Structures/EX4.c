/*
 ============================================================================
 Name        : EX4.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sstudent
{
	char name[50];
	int roll_number;
	float marks;
};

void printStudent(struct Sstudent student)
{

	printf("Name : %s\nRoll : %d\nMarks : %.2f",student.name,student.roll_number,student.marks);
}

struct Sstudent getSudent()
{
	struct Sstudent student;
	printf("Enter name : ");
		fflush(stdin); fflush(stdout);
		gets(student.name);
		printf("Enter roll number : ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&student.roll_number);
		printf("Enter marks : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&student.marks);

		return student;
}

int main(void) {

	//printf("Size = %lld",sizeof(struct Sstudent));  //60
	struct Sstudent students[10];
	int i;
	int size=(sizeof(students)/sizeof(students[0]));



	printf("Enter information of students : \n");
	for(i=0;i<size;i++)
	{
		printf("\nFor roll number %d\n",i+1);
		students[i]=getSudent();
	}


	printf("\nDisplaying information of students\n");
	for(i=0;i<size;i++)
		{
			printf("\nFor roll number %d\n",i+1);
			printStudent(students[i]);
		}





	return 0;
}
