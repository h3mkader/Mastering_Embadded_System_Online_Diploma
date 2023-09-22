/*
 ============================================================================
 Name        : Q2.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : Write a program in C to print all the alphabets using a pointer.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	/*char a='A';
	char z='Z';
	for(char i=a;i<=z;i++)
		printf("%c ",i);
	 */

	char alphabets[27];
	char* ptr;
	ptr=alphabets;

	for(int i=0;i<26;i++)
	{
		*ptr='A'+i;
		ptr++;
	}
	ptr=alphabets;
	printf("The Alphabets are :\n");
	for(int i=0;i<26;i++)
	{
		printf("%c  ",*ptr);
		ptr++;
	}



	return 0;
}
