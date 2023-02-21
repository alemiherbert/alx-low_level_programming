#include "main.h"

/**
 * print_alphabet - this function prints the alphabet
 * Description: this function prints the letters of the alphabet
 * in lowercase
 *
 * Return: none
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
