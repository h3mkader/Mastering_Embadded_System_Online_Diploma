/*
 ============================================================================
 Name        : EX1.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Prime numbers between two intervals
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void print_PrimeNumbers(int x,int y);

int main(void) {
	int x,y;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&x,&y);
	print_PrimeNumbers(x,y);


	return 0;
}


void print_PrimeNumbers(int x,int y)
{
	char isPrime;
	printf("Prime numbers between %d and %d are : ",x,y);
	for(int i=x;i<=y;i++)
	{


		if(i!=0 && i!=1)
			isPrime=1;

		for (int j=2;j<i/2+1;j++)
		{
			if(i%j==0)
			{
				isPrime=0;
				break;
			}

		}
		if (isPrime)
			printf("%d ",i);
	}
}
