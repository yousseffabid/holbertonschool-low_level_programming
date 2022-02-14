#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: Pointer to a string
 * Return: int, length of the string
 */
int _strlen(char *s)
{
	int i;
	int j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j++;
	}

	return (j);
}
