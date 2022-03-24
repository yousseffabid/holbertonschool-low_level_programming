#include "main.h"

/**
 * set_bit - get the value of the nth bit
 * @n: pointer to unsigned number
 * @index: index of the bit
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = 1 << index;

	if (index > 63)
		return (-1);

	*n = (*n) | mask;

	if (*n)
		return (1);
	else
		return (-1);
}
