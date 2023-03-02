#include <stdio.h>

/**
 * cap_string - this function capitalises every word of a string
 * @s: the string to capitalise
 *
 * Return: the capitalised string
 */
char *cap_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] >= 97 && s[i] <= 122)
		{
			j = i - 1;
			if (s[j] == 32 || s[j] == 09 || s[j] == 10 ||
				s[j] == 44 || s[j] == 59 || s[j] == 46 ||
				s[j] == 33 || s[j] == 63 || s[j] == 34 ||
				s[j] == 40 || s[j] == 41 || s[j] == 123 ||
				s[j] == 124)
				s[i] -= 32;

		}
	return (s);
}
