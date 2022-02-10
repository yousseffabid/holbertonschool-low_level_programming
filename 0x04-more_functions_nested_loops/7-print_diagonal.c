#include "main.h"
/**
 * print_diagonal - prints a '\'
 * @n: number of times to write the '\'
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
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
