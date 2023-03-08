#include "main.h"

/**
 * _pow_recursion - compute the value of x raised to power y
 * @x: the base
 * @y: the power
 * Return: the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
