#include "stdio.h"

void main()
{
	char x;
	printf("Please enter a character: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%c", &x);
	if(x=='a' || x=='i' || x=='o' || x=='u' || x=='e' || x=='A' || x=='I' || x=='O' || x=='U' || x=='E')
	{
		printf("Character is vowel");
	}
	else
	{
		printf("Character not Vowel");
	}
}
