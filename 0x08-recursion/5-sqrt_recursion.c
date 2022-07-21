#include "main.h"

/**
 * get_root - gets the root
 * @input: the number
 * @i: a counter
 */
int get_root(int input, int i)
{
	if (input == (i * i))
		return (i);
	else if (input > (i * i))
		return (get_root(input, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion -find the square root
 * @n: the number
 * Return: root if perfect square, -1 if not
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (get_root(n, 1));
}

