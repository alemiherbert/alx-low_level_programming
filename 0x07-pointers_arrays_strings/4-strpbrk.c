#include "main.h"

/**
 * _strpbrk - locate the first occurence in s of any of the bytes in accept
 * @s: the string to search
 * @accept: the string whose characters to look for
 *
 * Return: a pointer to the byte in s that matches the byres in accept or null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		for (j = 0; *(j + accept) != '\0'; j++)
			if (*(s + i) == *(j + accept))
				return (s + i);
	return ('\0');
}
