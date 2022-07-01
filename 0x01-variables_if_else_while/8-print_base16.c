#include <stdio.h>


/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	int c = 48;
	int C = 97;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	while (C <= 102)
	{
		putchar(C);
		C++;
	}
	putchar(10);
	return (0);
}
