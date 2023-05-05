#include "main.h"

/**
 * clear_bit - set the bit at a given index to 0
 * @n: the number
 * @index: the index
 *
 * Return: 1 if successful, else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!(index < 64))
		return (-1);
	if (1 << index & *n)
		*n ^= 1 << index;
	return (1);
}
