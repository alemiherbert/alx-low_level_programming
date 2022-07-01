#include <stdio.h>


/**
 * main - entry point
 * return 0 if success
 */
int main(void)
{
	int i, j;
	for (i = 48; i < 57; i++)
	{;
		for (j = 49; j <= 57; j++)
		{
			if (!(i >= j))
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
