#include "main.h"
/**
 * binary_to_uint -converts binary to an uns int
 * @b: pointer to char
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '1')
			uint = (uint << 1) | 1;

		else if (*b == '0')
			uint <<= 1;

		else
			return (0);

		b++;
	}

	return (uint);
}
