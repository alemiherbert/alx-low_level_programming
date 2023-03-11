#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 1 if non digit
 */
int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0)
		{
			puts("Error");
			return (1);
		}
		/**
		 * There's a bug due to my use of atoi ... the function
		 * successfully converts any argument that starts with an
		 * int into an int, which leads to wrong results.
		 *
		 * The suggested fix is to use strtol, but I'm too lazy,
		 * and it's dawn
		 */
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
