#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point  into the program
 * Description: asign a random variable to a number n
 * and print wether the number is positive or negative
 * Return: 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
