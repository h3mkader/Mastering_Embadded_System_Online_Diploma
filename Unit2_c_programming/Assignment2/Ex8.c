/*
 ============================================================================
 Name        : Ex8.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y;
	char operand;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&operand);
	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);

	switch(operand)
	{
	case '+':
		printf("%.1f + %.1f = %.1f",x,y,x+y);
		break;
	case '-':
		printf("%.1f - %.1f = %.1f",x,y,x-y);
		break;
	case '*':
		printf("%.1f * %.1f = %.1f",x,y,x*y);
		break;
	case '/':
		printf("%.1f / %.1f = %.1f",x,y,x/y);
		break;
	default:
		printf("Wrong Entry");
	}
	return EXIT_SUCCESS;
}
