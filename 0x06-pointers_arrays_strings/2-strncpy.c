#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: pointer to the string to be copied to
 * @src: pointer to the string to copy from
 * @n: the number of bytes to copy
 *
 * Return: pointer to the string copied to
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i) != '\0'; i++)
		*(dest + i) = *(src + i);

	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
