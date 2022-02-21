#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the 1st occurence
 */
char *_strstr(char *haystack, char *needle)
{
		int i, j, k, l, present;

		j = 0;
		i = 0;
		present = 1;
		while (haystack[i] != '\0')
		{
			if (needle[j] == haystack[i])
			{
				k = i + 1;
				l = j + 1;
				while (needle[l] != '\0')
				{
					if (needle[l] != haystack[k])
					{
						present = 0;
						break;
					}
					else
						present = 1;
					k++;
					l++;
				}
				if (needle[l] == '\0' && present == 1)
				return (needle);
			}
			i++;
		}
		return (0);
}
