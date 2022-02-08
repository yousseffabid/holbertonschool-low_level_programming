#include "main.h"
/**
 * print_last_digit - writes the last digit of number
 * @n: The number from which the function will display the last digit
 * Return: the last digit of the number n
 */
int  print_last_digit(int n)
{
	if (n >= 0)
		return (n % 10);
	else
		return (-1 * n % 10);
}
