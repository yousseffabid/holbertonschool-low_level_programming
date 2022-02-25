#include "main.h"
/**
 * main - check the code
 * @argc: number of arguments aupplied to program
 * @argv: array that contains the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result, i, j;

	result = 0;
	j = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < (int)strlen(argv[i]); j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	}
	return (0);
}
