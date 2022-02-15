#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: The string that contains the integer to display
 * Return: integer
 */
int _atoi(char *s)
{
	int i, positive, negative, j;
	unsigned int number, digits;

	digits = 1;
	number = 0;
	positive = negative = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			negative++;
		}
		else if (s[i] == '+')
		{
			positive++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			j = i;
			while (s[++i] >= 48 && s[i] <= 57)
			{
			digits = digits * 10;
			}
			while (digits >= 1)
			{
			number = (s[j++] - 48) * digits + number;
			digits /= 10;
			}
			break;
		}
	}
	if (negative % 2 != 0 && positive != negative)
		return ((signed int)number * -1);
	else
		return ((signed int)number);
}
