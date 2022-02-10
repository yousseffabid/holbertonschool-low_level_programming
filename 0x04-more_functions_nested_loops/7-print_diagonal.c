#include "main.h"
/**
 * print_diagonal - prints a '\'
 * @n: number of times to write the '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
