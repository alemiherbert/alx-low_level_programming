#include "main.h"


/**
 * binary_to_uint - a function that converts a
 * string in binary to an unsigned integer
 * @b: the string
 *
 * Return: the numerical value of the number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, j, result;

	if (!b)
		return (0);

	i = 0;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;

	j = 0;
	while (b[j])
	{
		result += (b[j] - '0') * ((2 << 1) >> 1);
		i--;
		j++;
	}
	return (result);
}
