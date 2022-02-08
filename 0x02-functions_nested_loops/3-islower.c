#include "main.h"

/**
 * _islower - check if the character is lowercase
 * @c: The character the check if it's a lowercase or uppercase
 * Return: On success 1.
 * On error, 0 is returned, the character is uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
