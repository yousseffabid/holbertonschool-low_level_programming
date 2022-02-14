#include "main.h"

/**
 * swap_int- swap two integers
 * @a: The pointer that points to the 1st int
 * @b: The pointer that points to the 2nd int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
