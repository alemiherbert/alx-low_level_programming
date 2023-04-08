#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 1 if little endian, else 0
*/
int get_endianness(void)
{
	int x = 1;

	/**
	 * check wether x casted to a char pointer
	 * returns 1 when dereferenced.
	 *
	 * On little endian systems, the least significant
	 * bit is saved at a lowe address, and thus dereferencing
	 * fetches the value stored at the lowest location in memory
	*/
	return (*((char *) &x));
}
