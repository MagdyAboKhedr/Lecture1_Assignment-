/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	int i, sum=0, n;
	printf("Enter number: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d", &i);
	for(n=0;n<=i;n++)
	{
		sum=sum+n;
	}
	printf("Sum=%d", sum);
}
