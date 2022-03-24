#include "main.h"
/**
 * print_binary - convert ul to binary
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int check, i, multi_of_two;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (multi_of_two = 1; (multi_of_two * 2) <= n; multi_of_two *= 2)
	;
	check = 0;
	for (i = 0; ; i++)
	{
		check = multi_of_two >> i;

		if (check == 0)
			break;

		if ((n & check) > 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
