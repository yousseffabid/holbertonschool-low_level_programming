#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: The string that contains the integer to display
 * Return: integer
 */
int _atoi(char *s)
{
	int i;
	int digits;
	int number;
	int sign;
	int j;

	digits = 1;
	number = 0;
	sign = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign--;
		}
		else if (s[i] == '+')
		{
			sign++;
		}
		if ((s[i] >= 48 && s[i] <= 57))
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
	return (number * (sign / abs(sign)));
}
