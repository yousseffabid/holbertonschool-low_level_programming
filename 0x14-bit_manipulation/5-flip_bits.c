#include "main.h"

/**
 * flip_bits - return number of bits to flip
 * @n: original number
 * @m: the number we want to get
 * Return: unsigend int number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result_XOR;
	unsigned int count_flipped;

	count_flipped = 0;
	result_XOR = n ^ m;

	while (result_XOR != 0)
	{
		if ((result_XOR & 1) == 1)
			count_flipped++;

		result_XOR >>= 1;
	}
	return (count_flipped);
}
