#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for in the array
 * Return: index of foud value or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i;

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
			else
				printf("\n");
		}

		mid = (start + end) / 2;

		if (value == array[mid])
			return (mid);

		if (value < array[mid])
			end = mid - 1;

		else
			start = mid + 1;
	}

	return (-1);

}
