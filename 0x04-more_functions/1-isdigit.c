#include "main.h"

/**
 * _isupper - check for uppercase
 * @c: input character
 * Return: int
 */
int _isupper(int c)
{
	if (c >= '0'&& c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
