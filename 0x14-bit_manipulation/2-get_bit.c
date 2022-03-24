#include "main.h"

/**
 * traversal - traverse the binary number
 * @n: unsigned number
 * @index: index of the bit
 * @i: counter
 * Return: int
 */
int traversal(unsigned long int n, unsigned int index, unsigned int i)
{
	int b;

	if (n == 0)
		return (-1);

	b = traversal(n >> 1, index, i + 1);

	if (index == i)
	{
		if ((n & 1) == 1)
			return (1);
		else
			return (0);
	}

	return (b);
}
/**
 * get_bit - get the value of the nth bit
 * @n: unsigned number
 * @index: index of the bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == 0)
		return (0);
	return (traversal(n, index, 0));
}
