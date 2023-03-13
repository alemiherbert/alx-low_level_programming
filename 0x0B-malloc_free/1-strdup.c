#include "main.h"

/**
 * _strdup - duplicate a string
 * @str: the string to duplicate
 *
 * Return: pointer to the new string
 */
char *_strdup(char *str)
{
	unsigned int i;
	char *result;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	/* Extra byte is for null terminator */
	result = malloc(i + 1);
	if (!result)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		result[i] = str[i];
	return (result);
}
