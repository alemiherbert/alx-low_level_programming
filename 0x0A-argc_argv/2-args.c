#include <stdio.h>


/**
 * main - a program that prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	unsigned int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
