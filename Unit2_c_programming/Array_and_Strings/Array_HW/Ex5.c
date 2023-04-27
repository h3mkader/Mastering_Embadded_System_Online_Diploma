/*
 ============================================================================
 Name        : Ex5.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description :C Program to Search an element in Array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[100],n,i,num;
	printf("Enter no of elements : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{

		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched : ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{

		if(num==arr[i])
		{
			printf("Number found at the location = %d",i+1);
			break;
		}
	}
	if(i==n)
		printf("Number NOT found");
	return EXIT_SUCCESS;
}
