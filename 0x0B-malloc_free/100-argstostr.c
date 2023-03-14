#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenate all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: the concatenated string
*/
char *argstostr(int ac, char **av)
{
	char *output;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Get the total length of the arguments */
	k = 0;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	
	len = k + 1 + ac;
	output = malloc(len * sizeof(char));
	if (!output)
		return (NULL);

	/* Build the string */
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			output[i] = av[j][k];
			i++;
		}
		output[i] = '\n';
		i++;
	}
	output[i] = '\0';
	return (output);	
}