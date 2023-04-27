/*
 ============================================================================
 Name        : Ex3.c
 Author      : Hadeer Emad
 Copyright   : Your copyright notice
 Description : C Program to Find Transpose of a Matrix
 ============================================================================
 This program asks user to enter a matrix (size of matrix is specified by user)
 and this program finds the transpose of that matrix and displays it.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int A[10][10],trans_A[10][10],i,j,r,c;
	printf("Enter rows and column of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&r,&c);

	printf("Enter elements of matrix : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements a%d%d : ",i+1,j+1);
			fflush(stdin); fflush(stdout);
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			trans_A[i][j]=A[j][i];
		}
	}
	printf("Entered Matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\r\n");
	}
	printf("Transpose of Matrix: \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d\t",trans_A[i][j]);
		}
		printf("\r\n");
	}
	return EXIT_SUCCESS;
}
