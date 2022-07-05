#include "main.h"

/**
 * print_alphabet - prints all the lowercase letterd of the alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);
	return;
}	
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}

