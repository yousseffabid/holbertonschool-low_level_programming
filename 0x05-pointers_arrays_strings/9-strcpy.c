#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * Return: pointer to the string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	if (dest[i + 1] != '\0')
	{
		dest[i + 1] = '\0';
	}
	return (dest);
}
