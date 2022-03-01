#include "main.h"
/**
 * _strdup - creates a copy of a string
 * @str: string
 * Return: pointer to char
 */
char *_strdup(char *str)
{
	int i, j;
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
