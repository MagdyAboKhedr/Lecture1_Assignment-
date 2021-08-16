/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	char x;
	printf("Enter character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &x);
	if((x>='A' && x<='Z') || (x>='a' && x<='z'))
	{
		printf("%c is a character", x);
	}
	else
	{
		printf("%c is not a character", x);
	}
}
