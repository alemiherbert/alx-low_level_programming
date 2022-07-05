#include "main.h"

void print_aphabet(void);
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
