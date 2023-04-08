#include "main.h"
#include <stdio.h>

/**
 * get_bit - return the value of a bit at a given index
 * @n: the number
 * @index: the index
 *
 * Return: the value of the bit, or 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (!(index < 64))
		return (-1);
	if (1 << index & n)
		return (1);
	return (0);
}
