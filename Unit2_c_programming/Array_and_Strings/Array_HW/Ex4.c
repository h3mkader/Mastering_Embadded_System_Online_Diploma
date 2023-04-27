/*
 *  ============================================================================
 Name        : Ex4.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description :C Program to Insert an element in an Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100],n,i,num,location;
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be inserted : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&location);

	for(i=n;i>=location;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[location-1]=num;
	for(i=0;i<n+1;i++)
	{
		printf("%d ",arr[i]);
	}


	return EXIT_SUCCESS;
}
