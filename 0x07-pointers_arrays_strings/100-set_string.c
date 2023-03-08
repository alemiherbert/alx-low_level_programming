#include "main.h"

/**
 * set_string - set the value of a pointer to a char
 *
 * @s: the string pointed to;
 * @to: the source string
 *
 * Return: 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
