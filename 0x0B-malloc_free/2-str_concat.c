#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *ptr;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == 0)
		return ((void *)0);
	for (k = 0; k <= (i + j); k++)
	{
		if (k < i && s1[k] != '\0')
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - i];
	}
	return (ptr);
}
