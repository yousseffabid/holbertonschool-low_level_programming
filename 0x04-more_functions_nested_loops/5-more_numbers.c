#include "main.h"
/**
 * more_numbers - writes number from 0 to 14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 10; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (k = 48; k <= 52; k++)
		{
			_putchar('1');
			_putchar(k);
		}
		_putchar('\n');
	}
}
