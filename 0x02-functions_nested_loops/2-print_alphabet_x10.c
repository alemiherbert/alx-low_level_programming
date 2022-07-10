#include "main.h"

/** print_alphabetx10 print alphabet 10 times
 * Return: nothing
 */
void print_alpbhabetx10(void)
{
	int i;
	char c;

	for(i = 0; i < 10; i++)
	{
		for(c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar(c);
	}
}
