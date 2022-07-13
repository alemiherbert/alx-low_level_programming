#include "main.h"

/**
 * _strlen -get the length of a string
 * @s: a character array
 * Return: length of the string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while(*s != 0)
	{
		i++;
		s++;
	}
	return (i);
}
