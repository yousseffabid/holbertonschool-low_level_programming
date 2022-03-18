#include "main.h"
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to allocated memory
 * @old_size: number of bytes
 * @new_size: new number of bytes
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free (ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
