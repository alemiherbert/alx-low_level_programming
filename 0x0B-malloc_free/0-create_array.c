#include "main.h"


/**
 * create_array - create an array of chars and initialize it with
 * a specific char
 *
 * @size: the size of the array
 * @c: the char
 *
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *result;

	result = malloc(size * sizeof(char));
	if (!result || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		*(result + i) = c;

	return (result);
}
