#include "main.h"
#include <stdio.h>

/**
 * print_binary - print the binary representation of a number
 * @n: the number
 */
void print_binary(unsigned long int n)
{
	unsigned long int rem;

	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}
	rem = n - ((n >> 1) << 1);
	n >>= 1;
	print_binary(n);
	_putchar(rem + '0');
}
