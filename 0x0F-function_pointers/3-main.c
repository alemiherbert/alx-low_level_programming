#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a simple calculator
 * @argu
 */
int main(int argc, char **argv)
{
	int n1, n2, result;
	char *opr;
	int (*fn)(int, int);

	if (argc != 4)
		return (EXIT_FAILURE);

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opr = argv[2];

	fn = get_op_func(opr);

	result = fn(n1, n2);
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
