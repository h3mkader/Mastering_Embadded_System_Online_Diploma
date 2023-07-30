/*
 ============================================================================
 Name        : EX1.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Store information of a student using structure
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
	printf("\nDisplaying informaton\n");
	printf("Name : %s\nRoll : %d\nMarks : %.2f",student.name,student.roll_number,student.marks);
}

int main(void) {

	//printf("Size = %lld",sizeof(struct Sstudent));  //60
	struct Sstudent student1;
	printf("Enter information of a student : \n");
	printf("Enter name : ");
	fflush(stdin); fflush(stdout);
	gets(student1.name);
	printf("Enter roll number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&student1.roll_number);
	printf("Enter marks : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&student1.marks);

	printStudent(student1);

	return 0;
}
