/*
 ============================================================================
 Name        : Ex5.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Write C Program to Find ASCII Value of a Character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdin); 	fflush(stdout);
	scanf("%c",&c);
	printf("ASCII value of %c = %d",c,c);
	return EXIT_SUCCESS;
}
