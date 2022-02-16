#include "main.h"
/**
 * _strncat - appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 * @n: numbers of characters to append to the dest string
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{

	int i;
	int j;

	j = 0;
	for (i = 0; dest[i] != '\0'; i++)
	;
	while (j < n)
	{
		dest[i++] = src[j++];
		if (src[j] == '\0')
			break;
	}
	dest[i] = '\0';
	return (dest);
}
