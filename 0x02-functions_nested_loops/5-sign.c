#include "main.h"
/**
 * print_sign - writes the sign of and integer
 * @n: The integer to check its sign
 *
 * Return: 1 if the integer is positive
 * -1 if the integer is negative and 0 if it's equal to zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
