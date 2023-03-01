#include "main.h"

/**
 * _strcat - concatenate two strings
 *
 * @dest: the string to be added to
 * @src: the string to add
 *
 * Return: a pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *output = dest;

	/* move the pointer to dest to the last character */
	while (*dest != '\0')
		dest++;

	/* copy every character on src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* append the null character */
	*dest = '\0';
	return (output);
}
