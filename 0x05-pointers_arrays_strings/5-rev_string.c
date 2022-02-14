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
	char temp;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	;

	for (j = i - 1; j >= 0; j--)
	{
		temp = s[j];
		s[j] = s[k];
		s[k] = temp;
		k++;
	}
}
