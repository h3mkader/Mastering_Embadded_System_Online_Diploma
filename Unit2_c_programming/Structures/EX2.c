/*
 ============================================================================
 Name        : EX2.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Add Two Distances (in inch-feet) System Using Structures
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Sdistance
{
	int feet;
	float inch;
}gdis1,gdis2,gsum;

int main(void) {

	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&gdis1.feet);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&gdis1.inch);


	printf("Enter information for 2nd distance\n");
		printf("Enter feet: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&gdis2.feet);
		printf("Enter inch: ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&gdis2.inch);




		gsum.feet=gdis1.feet+gdis2.feet;
		gsum.inch=gdis1.inch+gdis2.inch;

		if(gsum.inch >=12.0)
		{
			gsum.feet+=1;
			gsum.inch-=12;
		}

		printf("Sum of distances = %d'-%.1f\"",gsum.feet,gsum.inch);


	return 0;
}
