#include "main.h"

/**
 * reverse_array - a function that reverses an array
 *
 * @a: the array to reverse
 * @n: the number of elements in the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; *(a + i) < (n / 2); ++i)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = tmp;
	}
}
