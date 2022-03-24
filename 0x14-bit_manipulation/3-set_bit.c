#include "main.h"

/**
 * set_bit - set bit to one
 * @n: pointer to unsigned number
 * @index: index of the bit
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;

	if (index >= 63)
	{
		*n = (*n) | mask;
		return (1);
	}

	return (-1);
}
