/*
 ============================================================================
 Name        : EX3.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Reverse sentence using recursion
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


void reverse_sentence();


int main(void) {
	printf("Enter a sentence : ");
	fflush(stdin); fflush(stdout);
	reverse_sentence();

	return 0;
}


void reverse_sentence()
{
	char c;
	scanf("%c",&c);

	if(c!='\n')
	{
		reverse_sentence();
	}
	printf("%c",c);
}
