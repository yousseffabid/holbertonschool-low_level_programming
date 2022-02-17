#include "main.h"
/**
 * leet -  encodes a string into 1337
 * @s: string to be encoded
 * Return: encccoded string
 */
char *leet(char *s)
{
	int i, j;
	char characters[] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (((s[i] == characters[j]) || (s[i]  == (characters[j] + 32))) &&
					(s[i] >= 65 && (s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)))
			{
				s[i] = 48 + j;
				break;
			}
		}
	}
	return (s);
}
