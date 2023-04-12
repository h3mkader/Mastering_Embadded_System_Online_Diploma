/*
 ============================================================================
 Name        : Ex6.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX6: C Program to Calculate Sum of Natural Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int n,sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&n);
	for(int i=1;i<=n;i++)
		sum+=i;
	printf("Sum = %u",sum);

	return EXIT_SUCCESS;
}
