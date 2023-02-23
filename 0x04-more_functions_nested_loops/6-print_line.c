#include "main.h"

/**
 * print_line - draw a line in the terminal
 * Description: >_<
 *
 * Return: nothing
 */
void print_line(int n)
{
	while (n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

int main(void)
{
	print_line(2);
	return (0);
}
