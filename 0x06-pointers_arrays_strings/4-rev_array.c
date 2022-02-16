#include "main.h"
/**
 * reverse_array - reverse the content of an array
 * @a: pointer to the 1st element of the array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;

	j = n - 1;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j--] = temp;
	}
}
