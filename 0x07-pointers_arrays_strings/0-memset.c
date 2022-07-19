#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed by s with a
 * constant b
 *
 * @s: pointer to memory area to fill
 * @b: the character to fill 
 * @n: number of bytes to fill
 */
char *_memset(char *s, char b, unsigned int n){
{
	int i;

	for (i = 0; i <= n; i++)
	{
		*(s + i) = b;
		s++;
	}
}
