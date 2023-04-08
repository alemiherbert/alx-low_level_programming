#include "main.h"
#include <stdio.h>

/**
 * flip_bits returns the number of bits you would need to flip to get from one number to another.
 * @n: the flip
 * @m: the flop
 *
 * Return: 1 if successful, else  -1
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned int total;
    unsigned int long x;

    /* flip the bits */
    /* for example 7 ^ 2 = 5 */
    /* 5 contains the number of flipped bits */
    x = n ^ m;

    for (total = 0; x ; x >>= 1)
        total += x & 1;
    return (total);
}