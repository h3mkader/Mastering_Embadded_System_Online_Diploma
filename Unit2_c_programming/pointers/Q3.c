/*
 ============================================================================
 Name        : Q3.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : Write a program in C to print a string in reverse using a pointer
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char* str_ptr, str[100];
	str_ptr=str;

	printf("Pointer : Print a string in reverse order :\n------------------------------------------------\n");

	printf("Input a string : ");
	fflush(stdin); fflush(stdout);
	while((*str_ptr=getchar())!='\n')
	{
		str_ptr++;
	}

	printf("Reverse of the string is : ");
	while(str_ptr>=str)
	{
		printf("%c",*str_ptr);
		str_ptr--;
	}
	return 0;
}
