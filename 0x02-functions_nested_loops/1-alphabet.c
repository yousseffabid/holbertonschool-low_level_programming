#include "main.h"
/**
 * print_alphabet - writes the character c to stdout
 * @c: The character to print
 *
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);

	_putchar('\n');
}
