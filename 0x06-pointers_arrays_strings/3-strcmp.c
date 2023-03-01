include "main.h"

/**
 * _strcmp - compare two strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * Return: -ve int is s1 < s2, 0 if s1 == s2, +ve int if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*(char *)s1 - *(char *)s2);
}
