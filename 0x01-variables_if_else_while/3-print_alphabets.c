#include <stdio.h>


/**
 * main - entry point
 * Return: 0 for success
 */
int main(void)
{
	int c = 65;
	int C = 97;

	while (c <= 90)
	{
		putchar(c);
		c++;
	}
	while (C <= 122)
	{
		putchar(C);
		C++;
	}
	return (0);
}
