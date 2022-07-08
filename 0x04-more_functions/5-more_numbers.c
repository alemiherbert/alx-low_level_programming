#include "main.h"


/**
 * print_numbers - print the numbers 10 times
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15;b++)
		{
			_printchar(b);
		}

		_putchar('\n');
	}
	_putchar('\n');
}
