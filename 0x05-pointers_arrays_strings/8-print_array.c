#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: Pointer to an array
 * @n: size of the array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
}
