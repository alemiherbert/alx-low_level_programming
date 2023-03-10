#include "main.h"

/**
 * _isalpha - checks if a character is part of the alphabet
 * Description: this function checks whether a character is part
 * of the alphabet
 * @c: the character to check
 *
 * Return: 1 if a letter 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
