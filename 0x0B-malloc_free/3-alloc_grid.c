#include "main.h"
/**
 * **alloc_grid - creates a 2d array
 * @width: width of the 2d array
 * @height: height of the 2d array
 * Return: pointer to pointer to int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr2, *ptr1;

	if (width < 0 || height < 0)
		return (NULL);

	ptr1 = malloc(sizeof(int) * width);
	if (ptr1 == 0)
		return (NULL);
	ptr2 = &ptr1;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(ptr1 + (i * width) + j) = 0;
		}
	}
	ptr2 = &ptr1;
	return (ptr2);
}
