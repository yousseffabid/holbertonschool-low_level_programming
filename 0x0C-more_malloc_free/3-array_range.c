#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: smallest number
 * @max: largest number
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min) + 4);
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
