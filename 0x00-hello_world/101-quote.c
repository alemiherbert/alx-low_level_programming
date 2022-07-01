#include <unistd.h>


/**
 * main - entry point into our program
 * Description: uses the unistd library instead of stdio
 * Return: 0 for success
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (0);
}
