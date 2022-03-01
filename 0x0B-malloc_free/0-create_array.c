
#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array with
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ((void *)0);
	ptr = malloc(sizeof(char) * size);
	if (ptr == 0)
		return ((void *)0);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
