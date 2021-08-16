/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	float x, y, z, largest;
	printf("Please enter 3 numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f %f", &x, &y, &z);
	largest = x;
	if(y>largest)
	{
		largest = y;
		if(z>largest)
		{
			largest=z;
		}
	}
	else if(z>largest)
	{
		largest = z;
	}

	printf("Largest number= %f", largest);
}
