/*
 ============================================================================
 Name        : Ex03.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description :  C Program to Reverse String Without Using Library Function
 ============================================================================
 You can only use library function strlen(),To find the length of the string
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void) {
	char str[100],rev_str[100],i;
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	gets(str);
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		rev_str[i]=str[l-i-1];
	}
	printf("Reverse string is : %s",rev_str);
	return EXIT_SUCCESS;
}
