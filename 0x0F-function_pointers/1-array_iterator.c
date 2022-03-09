#include "function_pointers.h"
/**
 * array_iterator - executes a function given as a parameter on each element
 * @array: array's name
 * @size: size of the array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
