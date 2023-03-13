#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string; NULL if not enough memory
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	result = malloc(i + j + 1);
	if (!result)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	j = i;
	for (i = 0; s2[i] != '\0'; i++, j++)
		result[j] = s2[i];

	return (result);
}
