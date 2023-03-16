#include "main.h"

/**
 * _calloc - allocate memory for an array, using malloc
 * @nmemb: size of the array
 * @size: size of each element
 *
 * Return: A pointer to the array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	int i, total_size;

	total_size = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	for (i = 0; i < total_size; i++)
		ptr[i] = 0;
	return (ptr);
}
