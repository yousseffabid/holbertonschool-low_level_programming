#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @s: string to be capitalized
 * Return: string
 */
char *cap_string(char *s)
{
	int i, j, found;

	found = 0;
	char seperators[] = {',', ';', '.', '!', '"', '(',
	')', '{', '}', '?', '\n', '\t', ' '};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= 97 && s[i] <= 122) && !(s[i] >= 65 && s[i] <= 90))
		{
			for (j = 0; j < 13; j++)
			{
				if (s[i] == seperators[j])
				{
				found = 1;
				break;
				}
			}
		}
		if ((found == 1) && (s[i + 1] >= 97 && s[i + 1] <= 122))
		{
			s[i + 1] = s[i + 1] - 32;
		}
		found = 0;
	}
	return (s);
}
