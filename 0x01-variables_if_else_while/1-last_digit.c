#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point into the program
 * Description: Prints the last digit of number and whetherit is:
 * (a) greater than 5
 * (b) 0
 * (c) less than 6 and 0
 * Return: 0 for success
 */
int main(void)
{
	int n, t;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	t = n % 10;
	if (t > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, t);
	if (t < 6 && t != 0)
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, t);
	if ((int)t == 0)
	{
		printf("Last digit of %d is 0 and is 0\n", n);
	}
	return (0);
}
