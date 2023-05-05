#include "main.h"


/**
 * print_binary - print the binary representation of a number
 * @n: the number
 *
*/
void print_binary(unsigned long int n)
{
	unsigned long int remainder;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	remainder = n - ((n >> 1) << 1);
	n >>= 1;
	print_binary(n);
	_putchar(remainder + '0');
}
