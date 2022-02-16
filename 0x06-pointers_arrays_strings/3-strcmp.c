#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: o if both strings are simalar, 1 if s1 > s2 or -1 if s1 < s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int result;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			result = -1;
			break;
		}
		else if (s1[i] > s2[i])
		{
			result = 1;
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
