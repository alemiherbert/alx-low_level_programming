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
		for (j = 0; j < 10; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(res + '0');
			} else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (j == 9)
			{
				_putchar('\n');
			} else
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}
		}
	}

}
