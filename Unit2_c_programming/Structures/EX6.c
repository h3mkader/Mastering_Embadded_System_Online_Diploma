/*
 ============================================================================
 Name        : EX6.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

union job {

	char name[32];
	float salary;
	int worker_no;
}u;

struct job1 {
	char name[32];
	float salary;
	int worker_no;
}s;


int main(){
	printf("size of union = %lld",sizeof(u));
	printf("\nsize of structure = %lld", sizeof(s)); return 0;
}
