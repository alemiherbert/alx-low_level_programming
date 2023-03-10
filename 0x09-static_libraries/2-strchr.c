#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: the string to search
 * @c: the character to look for
 *
 * Return: a pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	/* If the c is the NULL charater */
	if (*s == c)
		return (s);
	/* Otherwise if all else fails */
	return ('\0');
}
