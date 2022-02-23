#include "main.h "
/**
 * _print_rev_recursion - prints a reversed string using recursion
 * @s: pointer to char
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*(s + 1) == '\0')
		_putchar(*s);
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
