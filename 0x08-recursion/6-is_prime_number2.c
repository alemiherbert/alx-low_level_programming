#include "main.h"


/**
 * chk_prime - checks wether prime or not
 * @a: number to check
 * @i: qualifier
 * Return: int
 */
int chk_prime(int a, int i)
{
	if (a == i)
		return (i);
	if (a % i == 0)
		return (0);
	return (chk_prime(a, i + 1));
}

/**
 * is_prime_number - showcase result
 * @n: input
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	/* start at 2 */
	return (chk_prime(n, 2));
}
