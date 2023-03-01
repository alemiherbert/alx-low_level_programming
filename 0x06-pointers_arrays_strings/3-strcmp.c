#include "main.h"

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
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
