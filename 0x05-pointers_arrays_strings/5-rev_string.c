#include "main.h"

/**
 * rev_string - print a string in reversw
 * @str: string to be printed;
 */
void rev_string(char *str)
{
	/* Get the length of the string */
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	i--;
	while (i >= 0)
	{
		_putchar(*(str + i));
		--i;
	}
}
