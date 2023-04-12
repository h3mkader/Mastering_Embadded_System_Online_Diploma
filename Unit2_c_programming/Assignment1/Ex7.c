/*
 ============================================================================
 Name        : Ex7.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Write Source Code to Swap Two Numbers without temp variable.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping, value of a = %f\nAfter swapping, value of b = %f",a,b);

	return EXIT_SUCCESS;
}
