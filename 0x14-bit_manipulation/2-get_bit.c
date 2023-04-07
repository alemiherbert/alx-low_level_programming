#include "main.h"
#include <stdio.h>

int get_bit(unsigned long int n, unsigned int index)
{
    if (!(index < 64))
        return (-1);
    if (1 << index & n)
        return (1);
    return (0);
}
