#include "main.h"
/**
 * _strncpy - copy a specific number of characters to the destination string
 * @dest: destination string
 * @src: source string
 * @n: numbers of characters to append to the dest string
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (dest[i] != '\0')
		dest[i++] = '\0';
	return (dest);
}
