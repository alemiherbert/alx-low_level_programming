minclude "main.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: pointer to destination character
 * @src: pointer to source character
 * Return: the result of the concatenation
 */
char *_strcat(char *dest, char *src)
{
	unsigned int a = 0;
	unsigned int b = 0;

	/* go to the last position of the des */
	while (*(dest + a) != '\0')
	{
		a++;
	}
	while (*(src + b) != '\0')
	{
		*(dest + a) = *(dest + b);
		a++;
		b++;
	}
	return (dest);
}
