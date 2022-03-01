#include "main.h"
/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character to fill the array with
 * Return: char
 */
char *_strdup(char *str)
{
	int i,j;
	char *str_copy;

	if (str == 0)
		return ((void *)0);
	for (i = 0; str[i] != '\0'; i++)
	;
	str_copy = malloc(sizeof(char) * i);
	if (str_copy == 0)
		return ((void *)0);
	for (j = 0; j < i; j++)
		str_copy[j] = str[j];
	return (str_copy);
}
