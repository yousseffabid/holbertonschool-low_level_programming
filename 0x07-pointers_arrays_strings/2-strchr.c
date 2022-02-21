#include "main.h"
/**
 * _strchr - pointer to the 1st occurrence of the char c in s
 * @s: string
 * @c: character to check its occurrence
 * Return: pointer to string.
 */
char *_strchr(char *s, char c)
{	
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}
