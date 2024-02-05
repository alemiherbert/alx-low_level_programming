#include "search_algos.h"


/**
 * linear_search - an implementation of the linear search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 * Return: the index to the value if found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
