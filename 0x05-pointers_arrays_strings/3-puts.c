#include "main.h"

/**
 * _puts - a function that prints a string to stdout
 *
 * @s: the string to print
 *
 * Return: 0 if all goes well
 */
int _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	_putchar('\n');
	return (0);
}