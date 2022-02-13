#include "main.h"
/**
 * print_number - prints an integer using putchar (recursive function)
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;
	unsigned int m;
	unsigned int k = 1;

		if (n < 0)
		{
			m = -(unsigned int)n;
			_putchar('-');

		}
		else
		{
			m = (unsigned int)n;
		}
		while (m / k >= 9)
		{
			k *= 10;
		}
		while (k >= 1)
		{
			i = m / k;
			_putchar(i % 10 + '0');
			k = k / 10;
		}
}
