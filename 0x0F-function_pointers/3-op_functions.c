#include "3-calc.h"

/**
 * op_add - add two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: the sum
 */
int op_add(int a, int b)
{
	return (a + b);
}


/**
 * op_sub - subtract two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - multiply two ints
 * @a: first operand
 * @b: second operand
 *
 * Return: the product
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - divide one int by another
 * @a: first operand
 * @b: second operand
 *
 * Return: the quotioent (floor division)
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod- return the modulo quotient
 * @a: first operand
 * @b: second operand
 *
 * Return: modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
