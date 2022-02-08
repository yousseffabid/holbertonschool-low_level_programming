#include "main.h"
/**
 * _abs - Computes the aboslute value of an integer
 * @n: The integer to compute its absolute value
 *
 * Return: A postive integer
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}
	else
	{
		return (n);
	}
}
