#include "main.h"
/**
 * print_number -  prints a number using putchar
 * @n: number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int digits;
	unsigned int number;
	unsigned int m;

	digits = 1;
	if (n < 0)
	{
		_putchar('-');
		m = -(unsigned int)n;
	}
	else
	{
		m = (unsigned int)n;
	}
	while (m / digits > 9)
	{
		digits *= 10;
	}
	while (digits >= 1)
	{
		number = m / digits;
		digits /= 10;
		_putchar((number % 10) + 48);
	}
}
