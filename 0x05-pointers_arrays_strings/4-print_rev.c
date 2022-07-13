#include "main.h"

/**
 * print_rev - print a string in reversw
 * @str: string to be printed;
 */
void print_rev(char *str)
{
	/* Get the length of the string */
	int i;

	i = 0;
	while (*(str + 1) != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(10);
	}
}
