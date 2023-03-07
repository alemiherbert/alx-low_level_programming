#include "main.h"

/**
 * _memset - fill memory with a constant byte
 *
 * @s: the area in memory to fill
 * @b: the constant byte to fill
 * @n: the number of bytes of s to fill
 *
 * Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n || *s != '\0'; i++, s++)
		*s = b;
	return (s);
}
