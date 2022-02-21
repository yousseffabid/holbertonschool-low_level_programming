#include "main.h"
/**
 * _strchr - pointer to the 1st occurrence of the char c in s
 * @s: string
 * @c: character to check its occurrence
 * Return: pointer to string.
 */
char *_strchr(char *s, char c)
{
	char *result;
	int i, j;

	j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			while (s[i] != '\0')
			{
				result[j] = s[i];
				i++;
				j++;
			}
			break;
		}
	}
	if (j == 0)
	{
		result = NULL;
		return (result);
	}
	result[j] = '\0';
	return (result);
}
