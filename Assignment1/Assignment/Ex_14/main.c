/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	int i, n, fac=1;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &i);
	if(i<0)
	{
		printf("ERROR: Number is -ve");

	}
	else if(i==0)
	{
		printf("Factorial of 0 = 1");
	}
	else
	{
		for(n=1;n<=i;n++)
		{
			fac=fac*n;
		}
		printf("factorial of %d is %d", i, fac);
	}
}
