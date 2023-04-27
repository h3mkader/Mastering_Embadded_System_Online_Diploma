/*
 ============================================================================
 Name        : Ex01.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : C Program to Find the Frequency of Characters in a String
 ============================================================================
 This program asks user to enter a string and a character and this program checks how many times
 that character is repeated in the string entered by user.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[100],c;
	int freq=0,i,l;
	printf("\nEnter a string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	l=strlen(str);
	printf("\nEnter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	for(i=0;i<l;i++)
	{
		if(str[i]==c)
			freq++;
	}
	printf("\nFrequency of %c = %d",c,freq);
	return EXIT_SUCCESS;
}
