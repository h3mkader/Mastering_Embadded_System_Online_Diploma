/*
 ============================================================================
 Name        : Ex4.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Multiply two Floating Point Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	printf("Enter two numbers: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("Product: %f",x*y);
	return EXIT_SUCCESS;
}
