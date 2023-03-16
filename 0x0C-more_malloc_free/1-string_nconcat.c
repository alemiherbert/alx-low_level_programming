#include "main.h"

/**
 * string_nconcat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes of the second string to add to the first string
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *output, *p;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	for (i = 0; s1[i] != '\0'; i++)
		;

	output = malloc((i + 1 + n * sizeof(char)));
	if (!output)
		return (NULL);

	p = output;

	while (*s1)
		*p++ = *s1++;

	i = 0;
	while (*s2 && i < n)
	{
		*p++ = * s2++;
		i++;
	}
	return (output);
}
