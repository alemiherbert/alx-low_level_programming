#include "main.h"

/**
 * print_last_digit - this function prints the last digit of an int
 * Description: this function prints the last digit of an int
 * @n: the integer whose last digit to return
 *
 * Return: the last digit of the integer n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		return (-(n % 10));
	}
	return (n % 10);
}
