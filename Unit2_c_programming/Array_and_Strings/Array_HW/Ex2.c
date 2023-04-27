/*
 ============================================================================
 Name        : Ex2.c
 Author      : Hadeer Emad
 Description :  C Program to Calculate Average Using Arrays
 ============================================================================
 This program takes n number of element from user(where, n is specified by user),
 stores data in an array and calculates the average of those numbers
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	printf("Enter the numbers of data: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	float arr[n],avr=0;
	for(i=0;i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[i]);
		avr+=arr[i];
	}
	avr/=n;
	printf("Average = %.2f",avr);

	return EXIT_SUCCESS;
}
