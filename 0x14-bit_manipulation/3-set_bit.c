#include "main.h"
#include <stdio.h>

/**
 * set_bit - set the bit at a given index to 1
 * @n: the number
 * @index: the index
 *
 * Return: 1 if successful, else  -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (!(index < 64))
		return (-1);
	*n |= 1 << index;
	return (1);
}
