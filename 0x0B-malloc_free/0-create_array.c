#include <stdlib.h>
/**
 * create_array - this function creates an array and
 * inititalizes it with a specific char
 *
 * @c: the char
 * @size: the size of the array
 *
 * Return: Pointer to the array or NULL if the array has size 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return ('\0');

	array = malloc(size);

	if (array == NULL)
		return ('\0');

	for (i = 0; i < size; i++)
		array[i] = c;

	array[size] = '\0';

	return (array);
}
