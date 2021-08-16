/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


#include "stdio.h"

void main()
{
	float x,y,res;
	char op;
	printf("Enter operator: + - / * ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &op);
	printf("Enter two operands: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f %f", &x, &y);

	switch (op)
	{
	case '+':
		res = x+y;
		break;
	case '-':
		res = x-y;
		break;
	case '*':
		res = x*y;
		break;
	case '/':
		res= x/y;
		break;
	default:
		printf("Invalid input");
	}

	printf("Result=%f", res);

}
