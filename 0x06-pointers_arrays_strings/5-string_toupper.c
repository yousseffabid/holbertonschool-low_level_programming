#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string that contains lowercase letters
 * Return: string that contains uppercase letters
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] <= 122 && s[i] >= 97)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
