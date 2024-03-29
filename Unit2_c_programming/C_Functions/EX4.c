/*
 ============================================================================
 Name        : EX4.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Calculate power of number using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

long int Power(int base,int power);

int main(void) {

	int base, power;
	printf("Enter base number : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);
	printf("Enter power number(positive integer) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&power);

	printf("%d^%d = %ld",base,power,Power(base,power));


	return 0;
}


long int Power(int base,int power)
{
	if (power>0)
		return base*Power(base,power-1);
	else
		return 1;
}
