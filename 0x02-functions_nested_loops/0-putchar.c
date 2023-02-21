#include "header.h"


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
