#include <stdio.h>


/**
 * main - entry point
 * return 0 if success
 */
int main(void)
{
	for (int i = 48; i < 57; i++)
	{
		for (int j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			j++;
		}
		putchar(44);
		putchar(32);
		i++;
	}
	return (0);
}
