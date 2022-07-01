#include <stdio.h>


/**
 * main - entry point into the program
 * Return: 0 for success
 */
int main(void)
{
	int c = 48;

	while (c <= 57)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(44);
			putchar(32);
		}
		c++;
	}
	putchar(10);
	return (0);
}
