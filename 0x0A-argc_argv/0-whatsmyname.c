#include <stdio.h>

/**
 * main - a program that prints its name
 * @argc: no of arguments
 * argv: argument vector
 *
 * Return: int
 *
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		if (argc == 1)
			printf("%s\n", argv[count]);
		else
			break;
	}
	return (0);
}
