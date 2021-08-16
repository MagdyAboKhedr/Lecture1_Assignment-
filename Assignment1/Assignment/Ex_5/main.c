/*
 * main.c
 *
 *  Created on: 15 Aug 2021
 *      Author: magdy
 */


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
	printf("Enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &x);
	printf("ASCII value of %c is: %d", x, x);
}
