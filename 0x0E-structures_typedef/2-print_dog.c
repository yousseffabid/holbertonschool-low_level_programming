#include <stdio.h>
#include "dog.h"
/**
 * print_dog -  prints a struct dog
 * @d: pointer to the variable of type struct dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("Age: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
