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
	void *tmp;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		free(ptr);
		return (tmp);
	}
	if (new_size > old_size)
	{
		tmp = malloc(new_size);
		if (tmp == NULL)
			return (NULL);
		free(ptr);
		return (tmp);
	}
	return (ptr);
}
