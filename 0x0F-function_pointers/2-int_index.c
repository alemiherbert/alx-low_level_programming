#include "function_pointers.h"


/**
 * int_index - search for an integer
 * @array: the array to search
 * @size: the size of the array
 *
 * @cmp: the function to search for
 *
 * Return: the index of the first element for which cmp passes
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) != 0)
				return (i);
	}
	return (-1);
}
