/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */
#include "stdio.h"

void main()
{
	float x, y, res;
	printf("Enter two numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f", &x, &y);
	res = x * y;
	printf("Product = %f", res);
}
