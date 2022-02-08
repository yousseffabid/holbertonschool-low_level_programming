#include "main.h"
/**
 * times_table - prints the 9 timnes table *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i == 0)
			{
				if (j != 9)
					printf("%d,  ", i * j);
				else
					printf("%d", i * j);
			}
			else if (i != 0 && j == 0)
				printf("%d", i * j);
			else if (i * j > 9)
				printf(", %d", i * j);
			else
				printf(",  %d", i * j);
		}
		printf("\n");
	}
}
