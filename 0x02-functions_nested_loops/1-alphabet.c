#include "header.h"


/**
 * main - this is the entry point into our program
 * Description: this program prints the alphabet in lowercase
 *
 * Return: 0 if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}
