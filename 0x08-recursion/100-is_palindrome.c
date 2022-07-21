#include "main.h"

/**
 * _strlen_recursion - get the length of the string
 * @s: the string
 * Return: an int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * check_pal - compare first to last
 * @s: string
 * @len: int
 * Return: int
 */
int check_pal(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (*s != '\0')
		return (1);
	return (check_pal(s + 1, len - 2)); /* Do it again */
}
/**
 * is_palindrome - check if palindrome
 * @s: string
 * Return: int 1 if true, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (check_pal(s, len));
}
