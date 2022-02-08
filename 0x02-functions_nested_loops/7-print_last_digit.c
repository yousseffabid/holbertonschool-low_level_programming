#include "main.h"
/**
 * print_last_digit - writes the last digit of number
 * @n: The number from which the function will display the last digit
 * Return: the last digit of the number n
 */
int  print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + abs(n % 10));
		return (-n % 10);
	}
}
