#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: character to check its occurrence
 * Return: length of the prefix substring.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length, present;

	length = 0;
	present = 0;
	for (i = 0; s[i] != 0; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				length++;
				present = 1;
				break;
			}
			else
			{
				present = 0;
			}
		}
		if (present == 0 && length > 0)
			break;
	}
	return (length);
}
