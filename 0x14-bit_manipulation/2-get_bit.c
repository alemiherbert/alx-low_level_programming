#include "main.h"

/**
 * get_bit - get the value of a bit at an index of a number
 * @n: the number
 * @index: the index
 *
 * Return: the value of the bit, otherwise 0
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (!(index < 64))
		return (-1);
	if (1 << index & n)
		return (1);
	return (0);
}
