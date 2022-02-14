#include "main.h"
/**
 * rev_string - reverse string and store the result in the same variable
 * @s: The pointer to a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int j;
	int k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	;

	char temp[i];

	for (j = i - 1; j >= 0; j--)
	{
		s[k] = temp[j];
		k++;
	}
}
