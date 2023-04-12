/*
 ============================================================================
 Name        : Ex3.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Add Two Integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,y;
	printf("Enter two integers: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x+y);
	return EXIT_SUCCESS;
}
