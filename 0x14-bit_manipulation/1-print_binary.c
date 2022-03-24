#include "main.h"
/**
 * traversal - compares every 0 and 1 present in n with 1
 * @n: input
 * Return: void
 */
void traversal(unsigned long int n)
{
	if (n == 0)
		return;

	traversal(n >> 1);

	if ((n & 1) == 1)
		_putchar('1');
	else
		_putchar('0');
}
/**
 * print_binary - prints binary from decimal
 * @n: %ul input
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	traversal(n);
}
