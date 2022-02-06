#include<stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int n;
	int m;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '8'; j++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				for (m = '0'; m <= '9'; m++)
				{
					if ((i != n || j != m) && (i != m || j != n) && (j <= m))
					{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(n);
					putchar(m);
					if (m != '9' || n != '9' || i != '9' || j != '8')
					{
					putchar(',');
					}
					putchar(' ');
					}
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
