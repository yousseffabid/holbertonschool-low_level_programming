#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free the allocated memory for dog_t
 * @d: pointer to struct dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
