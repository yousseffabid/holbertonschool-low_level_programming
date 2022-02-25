#include "main.h"
/**
 * main - check the code
 * @argc: number of arguments supplied to program
 * @argv: array that contains the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, number_of_coins, remainder;
	int change[] = {25, 10, 5, 2, 1};

	number_of_coins = 0;
	i = 0;
	remainder = atoi(argv[1]);
	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[1]) < 0)
		printf("0\n");
	else
	{
		while (remainder != 0)
		{
			if (remainder >= change[i])
			{
				number_of_coins += (remainder / change[i]);
				remainder = remainder % change[i];
			}
			else
			       i++;
		}
		printf("%d\n", number_of_coins);
	}

	return (0);
}
