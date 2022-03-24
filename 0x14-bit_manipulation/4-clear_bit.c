#include "main.h"

/**
 * clear_bit - aet the value of a bit to zero
 * @n: pointer to unsigned number
 * @index: index of the bit
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	mask = ~(1 << index);

	if (index <= 63)
	{
		*n = (*n) & mask;
		return (0);
	}
		return (-1);
}
