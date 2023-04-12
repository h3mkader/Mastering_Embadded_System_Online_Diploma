/*
 ============================================================================
 Name        : Ex7.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX7: C Program to Find Factorial of a Number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,fact=1;
	printf("Enter an integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);
		if(n<0)
			printf("Error!!! Factorial of negative number doesn't exist.");
		else
		{
			for(i=2;i<=n;i++)
			{
				fact*=i;
			}
			printf("Factorial = %d",fact);
		}
	return EXIT_SUCCESS;
}
