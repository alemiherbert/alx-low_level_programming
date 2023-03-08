#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: The number
 * Return: the factorial. If  n < 0 return -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
