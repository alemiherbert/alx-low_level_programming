#include <stdio.h>


/**
 * main - entry point
 * return 0 if success
 */
int main(void)
{
	for (int i = 48; i < 57; i++)
	{;
		for (int j = 49; j <= 57; j++)
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
