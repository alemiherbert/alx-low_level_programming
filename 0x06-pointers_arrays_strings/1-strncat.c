#include "main.h"

/**
 * _strncat - concatenate two strings
 *
 * @dest: the string to be added to
 * @src: the string to add
 * @n: the number of bytes to copy from n
 *
 * Return: a pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *output = dest;
	int i;

	/* move the pointer to dest to the last character */
	while (*dest != '\0')
		dest++;

	/* copy every character on src to dest */
	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* append the null character */
	*dest = '\0';
	return (output);
}
