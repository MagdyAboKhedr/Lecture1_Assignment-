/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	int x, y, res;
	printf("Enter two integers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d %d", &x, &y);
	res = x + y;
	printf("Sum= %d", res);
}
