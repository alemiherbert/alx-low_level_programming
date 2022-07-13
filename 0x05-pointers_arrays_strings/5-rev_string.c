#include "main.h"

/**
 * rev_string - print a string in reversw
 * @str: string to be printed;
 */
void rev_string(char *str)
{
	/* Get the length of the string */
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	i--;
	int j;
	char k;

	j = 0;
	while (j < i)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
		j++;
		i--;		
	}
}
