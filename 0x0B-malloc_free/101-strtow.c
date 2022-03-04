#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: string
 * Return: pointer to pointer to char
 */
char **strtow(char *str)
{
	int i, j, k, characters, words;
	char *ptr1;
	char **ptr2;

	if ((str == NULL || *str == '\0') ||
			(str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	characters = 0;
	words = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && str[i] != '\0')
			characters++;
		if ((str[i + 1] != ' ' && str[i + 1] != '\0' && str[i] == ' ')
				|| (str[i] != ' ' && i == 0))
			words++;
	}
	ptr1 = malloc(sizeof(char) * (characters + words));
	if (ptr1 == NULL)
		return (NULL);
	ptr2 = malloc(sizeof(char *) * (words + 1));
	if (ptr2 == NULL)
		return (NULL);
	j = 0;
	k = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] == ' ' && str[i + 1] != ' ') || (str[i] != ' ' && i == 0))
			ptr2[k++] = ptr1 + j;
		if (str[i] != ' ')
			ptr1[j++] = str[i];
		if ((str[i + 1] == ' ' || str[i + 1] == '\0') && str[i] != ' ')
			ptr1[j++] = '\0';
	}
	if (str[0] == ' ')
		k--;
	ptr2[k] = NULL;
	return (ptr2);
}
