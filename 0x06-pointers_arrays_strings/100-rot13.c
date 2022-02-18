#include "main.h"
/**
 * rot13 -  encodes a string into rot13
 * @s: string to be encoded
 * Return: encccoded string
 */
char *rot13(char *s)
{
	int i, j;
	char alphabets[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char encoded_alphabets[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == alphabets[j])
			{
				s[i] = encoded_alphabets[j];
				break;
			}
		}
	}
	return (s);
}
