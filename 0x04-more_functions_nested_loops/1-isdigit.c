#include "main.h"
/**
 * _isdigit - checks if the input is a digit
 * @c: parameter to check if it is a digit
 * Return: 1 if it is a digit or 0 it is not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
