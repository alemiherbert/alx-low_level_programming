#include "main.h"

/**
 * chk_prime - function that gets if num is 0 or 1
 *
 * @num: input number
 * @i: Counter variable
 * Return: int
 */

int chk_prime(int num, int i)
{
	if (num == i)
		return (1);
	if (num % i == 0)
		return (0);
	return (chk_prime(num, i + 1));
}

/**
 * is_prime_number - verify primeness
 * @n: input number
 *
 * Return: int 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (chk_prime(n, 2));
}
