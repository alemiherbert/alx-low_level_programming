#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - a simple calculator
 * @argu
 */
int main(int argc, char **argv)
{
	int n1, n2;
	char *opr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	opr= argv[2];

	if (get_op_func(opr) == NULL || opr[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opr== 47 || * opr== 37) && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(opr)(n1, n2));
	return (0);
}
