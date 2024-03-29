/*
 ============================================================================
 Name        : EX2.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate factorial of a number by using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Factorial(int x);
int Factorial_recursion(int x);

int main(void) {
	int x,fact;
	printf("Enter a positive integer : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);

	fact=Factorial_recursion(x);

	printf("Factorial of %d = %d",x,fact);

	return EXIT_SUCCESS;
}

int Factorial_recursion(int x)
{
	if (x>=1)
		return x*Factorial_recursion(x-1);
	else
		return 1;



}

int Factorial(int x)
{
	int fact=1;
	for(int i=2;i<=x;i++)
		fact*=i;

	return fact;
}



