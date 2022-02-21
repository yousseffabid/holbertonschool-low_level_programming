#include "main.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to integer
 * @size:ize of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + a[(size * i) + j];
			if (j + i + 1 == size)
				sum2 = sum2 + a[(size * i) + j];
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
