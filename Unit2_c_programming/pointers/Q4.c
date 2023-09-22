/*
 ============================================================================
 Name        : Q4.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : Write a program in C to print the elements of an array in reverse  order.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size,i,arr[15];
	printf("Input the number of elements to store in the array (max 15) : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);


	int* ptr=arr;
	printf("Input %d number of elements in the array : \n",size);

	for(i=0;i<size;i++)
	{
		printf("element - %d : ",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",&arr[i]);
		ptr++;
	}


	printf("The elements of array in reverse order are :\n");
	for(i=0;i<size;i++)
	{
		ptr--;
		printf("element - %d : %d\n",size-i,*ptr);
	}

	return 0;
}
