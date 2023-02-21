#include "header.h"
#include <unistd.h>


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success.
 * On error, -1 is returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}



/**
 * main - this is the entry point into our program
 * Description: A program that prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char *s = "_putchar";

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
