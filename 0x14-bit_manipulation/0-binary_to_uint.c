#include "main.h"
/**
 * power - a to the power of b
 * @a: base
 * @b: exponent
 * Return: unsigned int
 */
unsigned int power(unsigned int a, unsigned int b)
{
	unsigned int i, base;

	if (b == 0)
		return (1);
	i = 1;
	base = a;
	while (i < b)
	{
		a *= base;
		i++;
	}
	return (a);
}

/**
 * _strlen - returns length of string
 * @b: pointer to const char
 * Return: unsigned int
 */
unsigned int _strlen(const char *b)
{
	unsigned int i;

	i = 0;
	for (; *b; b++)
		i++;
	return (i);
}

/**
 * binary_to_uint -converts binary to an uns int
 * @b: pointer to char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, uint;

	if (b == NULL || *b == '\0')
		return (0);
	uint = 0;
	len = _strlen(b) - 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= '0' && b[i] <= '9')
		{
			if ((b[i] - '0') == 1)
				uint += power(2, len);
			len--;
		}
		else
			return (0);
	}
	return (uint);
}
