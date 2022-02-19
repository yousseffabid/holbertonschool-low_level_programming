#include "main.h"
/**
 * infinite_add -  adds two numbers
 * @n1: 1st string that represent a number
 * @n2: 2nd string that represent a number
 * @r: the string that will contain the result of the sum
 * @size_r: the buffer size
 * Return: string, resulting from the sum of both numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, plus;

	for (i = 0; n1[i] != '\0'; i++)
	;
	for (j = 0; n2[j] != '\0'; j++)
	;
	if ((size_r  < i) || (size_r < j))
		return ('\0');
	r[size_r - 1] = '\0';
	size_r = size_r - 2;
	i = i - 1;
	j = j - 1;
	plus = 0;
	while (i >= 0 || j >= 0)
	{
		if (i < 0 && j >= 0)
			r[size_r] = (n2[j] - 48 + plus) % 10 + 48;
		else if (i >= 0 && j < 0)
			r[size_r] = (n1[i] - 48 + plus) % 10 + 48;
		else
			r[size_r] = (n1[i] - 48 + n2[j] - 48 + plus) % 10 + 48;
		if (((n1[i] + n2[j] - 48 + plus) > '9' && (i >= 0 && j >= 0)) ||
				(n1[i] + plus > '9' && i >= 0) || (n2[j] + plus > '9' && j >= 0))
			plus = 1;
		else
			plus = 0;
		i--;
		j--;
		size_r--;
		if ((size_r < 0 && plus == 1) || (size_r < 0 && (i >= 0 || j >= 0)))
			return ('\0');
	}
	if (size_r >= 0 && plus == 1)
		r[size_r--] = '1';
	return (r + size_r + 1);
}
