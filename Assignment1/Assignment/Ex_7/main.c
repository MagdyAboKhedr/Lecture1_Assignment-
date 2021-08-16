/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

//if the two variables are integeres

void main()
{
	int x, y;
	printf("Please enter two numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d",&x, &y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("After swap x=: %d\n", x);
	printf("After swap y=: %d", y);
}

//if the two variables are float
/*
 * void main()
{
	float x, y;
	printf("Please enter two numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f",&x, &y);
	x = x + y;
	y = x - y;
	x = x - y;
	printf("After swap x=: %f\n", x);
	printf("After swap y=: %f", y);
}
 *
 */
