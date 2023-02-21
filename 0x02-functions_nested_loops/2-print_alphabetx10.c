#include "main.h"

/**
 * print_alphabetx10 - print the alphabet in lowercase, 10 times
 * Description: This function prints the alphabet 10 times
 * it is followed by a newline
 *
 * Return:
 */
void print_alphabetx10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
