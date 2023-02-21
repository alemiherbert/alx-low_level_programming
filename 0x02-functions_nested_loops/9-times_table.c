#include "main.h"


/**
 * times_table - print the 9 times table
 * Description: print the 9 times table
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, res;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			res = i * j;

			_putchar(',');
			_putchar(' ');

			if (res < 10)
				_putchar(' ');
			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}

}
