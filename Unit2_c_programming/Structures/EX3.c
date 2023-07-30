/*
 ============================================================================
 Name        : EX3.c
 Author      : Hadeer Emad
 Version     :
 Copyright   : Your copyright notice
 Description : Add Two Complex Numbers by Passing Structure to a Function
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct Scomplex
{
	float real;
	float img;
}gnum1,gnum2,gsum;

struct Scomplex Add(struct Scomplex A,struct Scomplex B)
{
	struct Scomplex C;
	C.real=A.real+B.real;
	C.img=A.img+B.img;

	return C;

}

struct Scomplex getNumber(char name[])
{
	struct Scomplex x;
	printf("\nFor %s complex number\n",name);
	printf("Enter real and imaginary respectively:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x.real,&x.img);
	return x;

}

int main(void) {

	gnum1=getNumber("1st");
	gnum2=getNumber("2nd");

	gsum=Add(gnum1,gnum2);

	printf("\nSum = %.1f + %.1fi",gsum.real,gsum.img);

	return 0;
}
