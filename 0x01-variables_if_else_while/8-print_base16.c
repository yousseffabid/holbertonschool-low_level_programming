#include <stdlib.h>
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
	char j;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');

	return (0);
}
