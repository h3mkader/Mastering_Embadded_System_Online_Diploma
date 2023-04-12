/*
 ============================================================================
 Name        : Ex2.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : EX2: C Program to Check Vowel or Consonant
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);

	switch(c)
	{
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':
	case 'U':
		printf("%c is a vowel",c);
		break;
	default:
		printf("%c is a consonant",c);
		break;

	}
	return EXIT_SUCCESS;
}
