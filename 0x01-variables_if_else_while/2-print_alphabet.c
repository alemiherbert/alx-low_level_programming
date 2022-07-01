#include <stdio.h>


/**
 * main - entry point into the program
 * Return: 0 for success
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
