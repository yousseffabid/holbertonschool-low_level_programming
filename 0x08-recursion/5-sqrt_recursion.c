#include "main.h"
/**
 * _sqrt - returns the natural square root of a number
 * @n: number to find its square root
 * @c: the guess for the square root
 *
 * Return: The Square Root if rational, or -1
 */
int _sqrt(int n, int c)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);

	if (c * c > n)
		return (-1);
	else if (c * c == n)
		return (c);
	else
		return (_sqrt(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to evaluate
 * Return: The Square root, or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
