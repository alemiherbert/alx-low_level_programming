#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 *
 * @s: the full string
 * @accept: the substring
 *
 * Return: the length of the substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, status;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		status = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*(s + i) == *(accept + j))
			{
				status = 0;
				break;
			}
		if (status == 1)
			break;
	}
	return (i);
}
