#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: input character
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 'A'&& c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
