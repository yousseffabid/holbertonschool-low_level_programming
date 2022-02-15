#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: The string that contains the integer to display
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int positive;
	int negative;
	int digits;
	int number;
	int sign;

	digits = 1;
	positive = 0;
	negative = 0;
	number = 0;
	sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if(s[i] == '-')
		{
		 	negative++;
		}
		else if (s[i] == '+')
		{
			positive++;
		}

		if (s[i] >= 48 && s[i] <= 57)
		{
			digits *= 10;	
		}
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
	 	{
	 		if (positive - negative < 0)
			{
				sign = -1;
				positive = 0;
				negative = 0;
			}

			digits/=10;
			number = (s[i]-48)*digits + number; 
		}
	}
	return (number * sign);
}
