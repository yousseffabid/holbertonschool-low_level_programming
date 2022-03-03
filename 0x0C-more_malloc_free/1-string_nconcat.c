#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of characters to copy from s2
 * Return: pointer to the new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n > strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (strlen(s1) + n); i++)
	{
		if (i < strlen(s1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - strlen(s1)];
	}
	ptr[i] = '\0';
	return (ptr);

}
