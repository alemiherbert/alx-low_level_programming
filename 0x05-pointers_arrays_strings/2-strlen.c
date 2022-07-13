#include "main.h"

/**
 * _strlen -get the length of a string
 * @s - a character array
 * Return: length of the string
 */
int _strlen(int *s)
{
	int i;
	
	while (*s != '\0')
	{
		i++;
		s++;
	}
}
