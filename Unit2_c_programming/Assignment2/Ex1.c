/*
 ============================================================================
 Name        : Ex1.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX1: Write C Program to Check Whether a Number is Even or Odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num%2==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
	return EXIT_SUCCESS;
}
