#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the substring to locate
 *
 * Return: Pointer to the location of the needle in the haystack
 */
char *_strstr(char *haystack, char *needle)
{
	char *htemp, *ntemp;

	while (*haystack)
	{
		htemp = haystack;
		ntemp = needle;
		while (*ntemp && *haystack == *ntemp)
			haystack++, ntemp++;
		if (!*ntemp)
			return (htemp);
		haystack++;
	}
	return ('\0');
}
