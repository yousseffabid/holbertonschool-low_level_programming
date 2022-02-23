#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string
 * @s: pointer to char
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*(s  + 1) != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	else
		return (1);

}

