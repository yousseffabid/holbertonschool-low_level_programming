#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long i;
	long k = 612852475143;
	long max = 0;

	for (i = 2; i <= k; i += 2)
	{
		while (k % i == 0)
		{
			if (i > max)
			{
				max = i;
			}
			k = k / i;
		}
		if (i == 2)
		{
			i = 1;
		}
	}
	printf("%ld\n", max);

	return (0);
}
