#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: character to check its occurrence
 * Return: pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
