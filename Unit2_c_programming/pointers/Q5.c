/*
 ============================================================================
 Name        : Q5.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : Write a program in C to show a pointer to an array which contents  are pointer to structure.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct SEmployee
{
	char* name;
	int id;
};

int main(void) {

	//pointer to array of pointers pointing to struct SEmployee
	struct SEmployee emp1={"Hadeer",10001},emp2={"Dodo",10002},emp3={"Heba",10003},emp4={"Hager",10004};



	struct SEmployee* pointers[]={&emp1,&emp2,&emp3,&emp4};
	struct SEmployee* (*ptr)[]=&pointers;
	printf("--------------------------------\n");
	printf("          Employees :           \n");
	printf("--------------------------------\n\n");
	for(int i=0;i<4;i++)
	{
		printf("Employee%d Name : %s\n",i+1,(*(*ptr+i))->name);
		printf("Employee%d ID : %d\n\n",i+1,(*(*ptr+i))->id);
	}


	return 0;
}
