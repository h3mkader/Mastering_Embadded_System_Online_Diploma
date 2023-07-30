/*
 ============================================================================
 Name        : EX5.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Find area of a circle, passing arguments to macros. [Area of circle=πг2]
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159
#define Area(r) (PI*r*r)


int main(void) {

	float r;
	printf("Enter the radius : ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);
	printf("Area = %.2f",(Area(r)));
	return 0;
}
