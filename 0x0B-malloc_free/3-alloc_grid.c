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
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] =  malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			free(ptr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
