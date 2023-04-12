/*
 ============================================================================
 Name        : Ex3.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX3:C Program to Find the Largest Number Among Three Numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x,y,z;
	printf("Enter three numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&x,&y,&z);
	if(x>y)
	{
		if(x>z)
			printf("Largest number = %f",x);
		else
			printf("Largest number = %f",z);
	}
	else
	{
		if(y>z)
			printf("Largest number = %f",y);
		else
			printf("Largest number = %f",z);
	}
	/*
	 ============================================================================
	 Another solution
	 ============================================================================
	 float max= (x>y ? (x>z?x:z):(y>z?y:z));
	 printf("Largest number = %f",max);
	 */

	return EXIT_SUCCESS;
}
