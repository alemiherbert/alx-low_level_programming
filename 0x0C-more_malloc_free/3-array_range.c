#include "main.h"
#include <stdio.h>

/**
 * array_range - create an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: the array
 */
int *array_range(int min, int max)
{
	int *array;
	int i, array_size;

	if (min > max)
		return (NULL);

	/* This 1 exists due to the fact that computers have 2 0's i.e -0 and +0 */
	array_size = max - min + 1;
	array = malloc(array_size * sizeof(int));
	if (!array)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return (array);
}
