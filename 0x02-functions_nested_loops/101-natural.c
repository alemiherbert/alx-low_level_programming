#include <stdio.h>

/**
 * main - the entry point into the program
 * Description: this program computes and prints the sum of all the multiples
 * of 3 and 5 below 1024 (exclusive)
 *
 * Return: 0 on success
 */
int main(void)
{
	int i, sum;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (1 % 3 == 0 || i % 5 == 0)
			sum += i;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
