#include "main.h"

/**
 * print_sign - print the sign of a number
 * Description: This function prints the sign of a number
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	/* Just to avoid them errors */
	return (-2);
}
