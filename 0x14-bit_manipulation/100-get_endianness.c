#include "main.h"

/**
 * get_endianness - check the endianness of a system
 * Return: 1 if little endian, else 0
*/
int get_endianness(void)
{
	int x = 1;

	return (*((char *) &x));
}
