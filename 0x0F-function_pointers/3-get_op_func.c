#include "3-calc.h"
#include <stdio.h>


/**
 * get_op_func - function that returns a pointer to a function that takes
 * 2 ints as input and returns an int
 * @s: the operand
 *
 * Return: a pointer to a function or NULL
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
