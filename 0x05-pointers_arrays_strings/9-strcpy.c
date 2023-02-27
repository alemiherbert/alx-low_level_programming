#include "main.h"


/**
 * _strcpy - copy one text pointed by one src to dest
 * @dest: the destination pointer
 * @src: the source pointer
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; ++i)
		dest[i] = src[i];
	dest[i + 1] = '\0';
	return (dest);
}
