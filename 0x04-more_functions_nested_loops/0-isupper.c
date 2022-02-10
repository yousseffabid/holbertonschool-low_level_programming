#include "main.h"
/**
 * _isupper - checks if the character is uppercase or not
 * @c: The character to check if it's an uppercase or not
 *
 * Return: 1 if the character is uppercase and 0 if it's note
 */
int _isupper(int c)
{
	if (c <= 65 || c >= 90)
	{
		return (1);
	}
	else
		return (0);
}
