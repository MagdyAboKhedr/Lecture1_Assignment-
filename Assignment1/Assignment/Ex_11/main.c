/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	float x;
	printf("Enter a number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f", &x);

	if(x>0)
	{
		printf("Number is +ve");
	}
	else if(x<0)
	{
		printf("Number is -ve");
	}
	else
	{
		printf("Number is zero");
	}
}
