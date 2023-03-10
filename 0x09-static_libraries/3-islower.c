#include "main.h"

/**
 * _islower - check for a lowercase character
 * Description: this function checks whether a character is lowercase or not
 * @c: the charcter to check
 *
 * Return: 1 if character is uppercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
