#include "search_algos.h"
#include <math.h>

/**
 * binary_search - an implementation of the binary search algorithm
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to look for
 *
 * Note: Binary search assumes a sorted array (ascending order in this case)
 * Return: the index of the value if found, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, mid, right;

	if (!array || size == 0)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", (int) array[i]);
			else
				printf("%d\n", array[i]);
		}
		mid = (size_t) floor((double) (left + right) / 2);
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
