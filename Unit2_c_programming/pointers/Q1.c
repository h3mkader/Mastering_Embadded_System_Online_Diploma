/*
 ============================================================================
 Name        : Q1.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : Write a program in C to demonstrate how to handle the pointers  in the program.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int m;
	int* ab=NULL;

	m=29;
	printf("Address of m : 0x%p\n",&m);
	printf("Value of m : %d\n\n",m);

	ab=&m;
	printf("Now ab is assigned with the address of m.\n");
	printf("Address of pointer ab : 0x%p\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);

	m=34;
	printf("The value of m assigned to 34 now.\n");
	printf("Address of pointer ab : 0x%p\n",ab);
	printf("Content of pointer ab : %d\n\n",*ab);

	*ab=7;
	printf("The pointer variable ab is assigned with the  value 7 now.\n");
	printf("Address of m : 0x%p\n",&m);
	printf("Value of m : %d\n\n",m);

	return 0;
}
