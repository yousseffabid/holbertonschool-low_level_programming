#include "main.h"

/**
 * get_bit - get the value of the nth bit
 * @n: unsigned number
 * @index: index of the bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = -1;
	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
