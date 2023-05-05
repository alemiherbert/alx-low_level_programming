#include "main.h"

/**
 * flip_bits - get the number of bits needed to flip
 * to get from one numner to another
 *
 * @n: the starting number
 * @m: the ending number
 * Return: the total number of bits to flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int total;
	unsigned long int aux;

	aux = n ^ m;
	for (total = 0; aux; aux >>= 1)
		total += aux & 1;
	return (total);
}
