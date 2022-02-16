#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	;
	while (src[j] != '\0')
	{
		dest[i++] = src[j++];
	}
	dest[i] = '\0';
	return (dest);
}
