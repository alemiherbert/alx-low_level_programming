#include "main.h"

/**
 * print_chessboard - print a chessboard
 * @a: the board
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i, j;

	for (i = 0; i < 8 * 8; i++)
	{
		if (i % 8 == 0 && i)
		{
			j = i;
			_putchar('\n');
		}
		_putchar(a[i / 8][i - j]);
	}
	_putchar('\n');
}
