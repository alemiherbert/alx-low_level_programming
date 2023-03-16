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
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	
	/* Get the length of the strings */
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	/* If n is bigger than length of s2 */
	n = n >= j ? j : n;

	output = malloc((i + n + 1) * sizeof(char));
	if (!output)
		return (NULL);

	p = output;

	while (*s1)
		*p++ = *s1++;

	i = 0;
	while (*s2 && i < n)
	{
		*p++ = *s2++;
		i++;
	}
	*p = '\0';
	return (output);
}
