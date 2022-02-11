#include "main.h"
/**
 * print_number - prints an integer using putchar (recursive function)
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int i;

	i = 10;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
