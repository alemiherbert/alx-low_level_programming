#include "main.h"


/**
 * malloc_checked - allocate memory wsing malloc, with a check
 * for failure
 * @b: the number of bytes to allocate
 * Return: pointer to the allocated memory. If fail, 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (!ptr)
		exit(98);
	return (ptr);
}
