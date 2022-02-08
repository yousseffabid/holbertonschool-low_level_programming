#include "main.h"

/**
 * print_alphabet_x10 - writes the alphabets ten times
 * Return: On success void.
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
