#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array's name
 * @size: size of the array
 * @cmp: pointer to function that compares between two int
 * Return: int, -1 if no element matches or the index of the 1st match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
