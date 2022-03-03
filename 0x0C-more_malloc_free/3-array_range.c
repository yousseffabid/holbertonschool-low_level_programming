#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: smallest number
 * @max: largest number
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int i, *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == 0)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
