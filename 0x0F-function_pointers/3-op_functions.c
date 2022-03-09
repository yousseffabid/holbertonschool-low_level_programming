#include "calc.h"
/**
 * op_add - add two integers
 * @a: lvalue
 * @b: rvalue
 * Return: int sum of a and b
 */
int op_add(int a, int b)
{
	return ((a) + (b));
}

/**
 * op_sub - subtract two integers
 * @a: lvalue
 * @b: rvalue
 * Return: int subtraction of a and b
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}

/**
 * op_mul - multiply two integers
 * @a: lvalue
 * @b: rvalue
 * Return: int multiplication of a and b
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}

/**
 * op_div - divide two integers
 * @a: lvalue
 * @b: rvalue
 * Return: int division of a and b
 */
int op_div(int a, int b)
{
	return ((a) / (b));
}

/**
 * op_mod - mod of a / b
 * @a: lvalue
 * @b: rvalue
 * Return: int mod of a / b
 */
int op_mod(int a, int b)
{
	return ((a) % (b));
}
