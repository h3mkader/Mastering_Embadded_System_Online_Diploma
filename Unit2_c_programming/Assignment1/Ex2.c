/*
 ============================================================================
 Name        : Ex2.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Print a Integer Entered by a User
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x;
	printf("Enter an integer : ");
	fflush(stdin); 	fflush(stdout);
	scanf("%d",&x);
	printf("You entered : %d",x);
	return EXIT_SUCCESS;
}
