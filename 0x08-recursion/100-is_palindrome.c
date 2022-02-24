#include "main.h"
/**
 * check - checks if a string is a palindrome
 * @s: string to evaluate, address of 1st element
 * @c: string to evaluate, address of last element
 * Return: 1 if the string is palindrome and 0 if it is not
 */
int check(char *s, char *c)
{
	if (*s == '\0')
		return (1);

	if (*s != *c)
		return (0);
	else if (*(s + 1) == '\0')
		return (1);
	else
		return (check(s + 1, c - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate, address of 1st element
 * Return: 1 if the stringr is palindrome and 0 if it is not
 */
int is_palindrome(char *s)
{
	return (check(s, (s + strlen(s) - 1)));
}
