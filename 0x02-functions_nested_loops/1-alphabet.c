#include "main.h"

/**
 * print_alphabet - writes alpahbets and prints a new line
 * Return: On success void.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
