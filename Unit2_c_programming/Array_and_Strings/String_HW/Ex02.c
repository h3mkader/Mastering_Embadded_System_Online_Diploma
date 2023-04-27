/*
 ============================================================================
 Name        : Ex02.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : C Program to Find the Length of a String
 ============================================================================
 You can use standard library function strlen() to find the length of a string but,
 this program computes the length of a string manually without using strlen() funtion.
 */
//Length of string:

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100],i;

	printf("\nEnter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	for(i=0;str[i]!='\0';i++);
	printf("Length of string: %d",i);

	return EXIT_SUCCESS;
}
