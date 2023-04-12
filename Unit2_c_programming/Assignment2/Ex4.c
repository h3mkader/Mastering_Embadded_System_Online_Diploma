/*
 ============================================================================
 Name        : Ex4.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX4: C Program to Check Whether a Number is Positive or Negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	if(num>0)
		printf("%.2f is positive.",num);
	else if (num<0)
		printf("%.2f is negative.",num);
	else
		printf("You entered zero.");


	return EXIT_SUCCESS;
}
