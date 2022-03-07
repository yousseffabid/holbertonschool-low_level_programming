#include <stdio.h>
#include <stdlib.h>
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
/**
 * _strlen - counts string length of s
 * @s: parameter
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcpy - copies string
 * @dest: destination
 * @src: destination
 * Return: (dest value)
 */
char *_strcpy(char *dest, char *src)
{
	char *cpy = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (cpy);
}
