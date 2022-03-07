#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to variable type struct dog
 * @name: dog name
 * @age: dog age
 * @owner: owner of dog
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
