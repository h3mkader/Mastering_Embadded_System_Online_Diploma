/*
 ============================================================================
 Name        : Ex1.c
 Author      : Hadeer Emad
 Description : Example of Multidimensional Array In C
 ============================================================================
 Write a C program to find sum of two matrix of order 2*2 using multidimensional arrays where,
 elements of matrix are entered by user.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j;
	float mat1[2][2],mat2[2][2];
	printf("Enter the elements of 1st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&mat1[i][j]);
		}
	}
	printf("Enter the elements of 2st matrix\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Enter b%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&mat2[i][j]);
		}
	}
	printf("Sum Of Matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mat1[i][j]+=mat2[i][j];
			printf("%.1f\t",mat1[i][j]);

		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
