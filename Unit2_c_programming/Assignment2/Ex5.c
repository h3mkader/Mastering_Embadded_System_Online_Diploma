/*
 ============================================================================
 Name        : Ex5.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX5: C Program to Check Whether a Character is an Alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	if(c>=65 && c<=122)
		printf("%c is an alphabet",c);
	else
		printf("%c is not an alphabet",c);


	return EXIT_SUCCESS;
}
