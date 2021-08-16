/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */

#include "stdio.h"

void main()
{
	int x;
	printf("Please enter integer: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &x);
	if(x%2==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
}
