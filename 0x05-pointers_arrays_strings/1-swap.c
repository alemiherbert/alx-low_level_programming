#include "main.h"

/**
 * swap_int - swap the values of twon integers
 * @a: the location of variable a;
 * @b: the location of variable b;
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
	
