#include "main.h"
#include <stdio.h>


/**
 * print_to_98 - print all the natural numbers to 98
 * @n: the starting point
 * Description: print all the natural numbers to 98
 * Return: nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
		for (n; n <= 98; n++)
			printf("%d", n);
	else
		for (n; n > 98; n--)
			printf("%d", n);
}
