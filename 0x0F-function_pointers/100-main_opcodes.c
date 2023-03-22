#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * main - program that prints the opcode of its own main function
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 1
*/
int main(int argc, char **argv)
{
	int i, n;
	char *p = (char *) main;

	if (argc != 2)
	{
		puts("Error");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		puts("Error");
		exit(2);
	}

	for (i = 0; i < n; ++i)
	{
		printf("%02x", p[i] & 255);
		if (i != n - 1);
			printf(" ");
	}
	printf("\n");
	return (0);
}