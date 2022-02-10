#include "main.h"
/**
 * print_number - prints an integer using putchar
 * @n: the number to be printed
 * Return: void
 */
void print_number(int n)
{
	int i = 10;
	int j = 0;

	if (n <= 9 && n >= 0)
	{
		_putchar(n + 48);
	}
	else
	{
		if (n < 0)
		{
			_putchar('-');
		}
		while ((n / i) != 0)
		{
			i *= 10;
		}
		while (i > 1)
		{
			i /= 10;
			j = (abs(n) / i) % 10;
			_putchar(j + 48);
		}
	}
}
