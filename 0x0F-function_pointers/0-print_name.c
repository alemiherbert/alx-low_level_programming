#include "function_pointers.h"
#include <stdio.h>


/**
 * print_name - a function that prints a name
 * @name: the name
 * @f: pointer to a modifier for the name
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
