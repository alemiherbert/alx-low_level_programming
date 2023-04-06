#include "main.h"


/**
 * binary_to_uint - convert a number in binary to an integer
 * @b: the string
 *
 * Return: the number in binary, or 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, j = 0, res = 0;

	if (!b)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}
	i--;
	while (b[j])
	{
		res += (b[j] - '0') * ((2 << i) >> 1);
		i--;
		j++;
	}
	return (res);
}
