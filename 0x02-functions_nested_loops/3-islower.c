#include "main.h"

/**
 * int_islower - check if the character is lowercase
 *
 * Return: On success 1.
 * On error, 0 is returned, the character is uppercase
 */

int _islower(int c)
{
	if( c >= 97 || c <= 122)
		return (1);
	else
		return (0);
}
