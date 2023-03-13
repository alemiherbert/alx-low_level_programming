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

	result = malloc(sizeof(str));
	if (!result)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		result[i] = str[i];
	return (result);
}
