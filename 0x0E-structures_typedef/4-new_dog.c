#include <stdio.h>
#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the variable of data type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_dog;

	ptr_dog = malloc(sizeof(dog_t));
	if (ptr_dog == NULL)
		return (NULL);
	ptr_dog->name = malloc(_strlen(name) + 1);
	ptr_dog->owner = malloc(_strlen(owner) + 1);
	if (ptr_dog->name == NULL || ptr_dog->owner == NULL)
	{
		free(ptr_dog->name);
		free(ptr_dog->owner);
		free(ptr_dog);
		return (NULL);
	}
	ptr_dog->name = _strcpy(ptr_dog->name, name);
	ptr_dog->owner = _strcpy(ptr_dog->owner, owner);
	ptr_dog->age = age;
	return (dog);
}
