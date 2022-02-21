#include "main.h"
/**
 * _memset -  fills the first n bytes with the constant byte b
 * @s: pointer to string
 * @b: character to be copied to the string
 * @n: number of bytes
 * Return: pointer to string.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
