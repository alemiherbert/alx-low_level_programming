#include "main.h"

/**
 * factorial - does what it says
 * @n: the number
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
