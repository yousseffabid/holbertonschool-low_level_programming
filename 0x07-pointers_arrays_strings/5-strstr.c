#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the 1st occurence
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, present;

	j = 0;
	present = 0;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i])
		{
			present = 1;
			j++;
		}
		else
		{
			j = 0;
			present = 0;
		}
		if (present == 1 && needle[j] == '\0')
			return (needle);
	}
	return (0);
}
