#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_baueir(void)
{
	int i = '0';
	int j = '0';
	int k = '0';
	int l = '0';

	while (1)
	{
		_putchar(i);
		_putchar(j);
		_putchar(':');
		_putchar(k);
		_putchar(l);
		_putchar('\n');
		if (i == '2' && j == '3' && k == '5' && l == '9')
		break;
		l++;
		if (l > '9')
		{
			k++;
			l = '0';
			if (k > '5')
			{
				k = '0'
				j++;
				if (j > '9')
				{
				j = '0';
				i++;
				}
			}
		}
	}
}
