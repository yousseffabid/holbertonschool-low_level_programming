#include "main.h"
/**
 * main - check the code
 * @argc: number of arguments aupplied to program
 * @argv: array that contains the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (argc == 1)
		printf("0\n");
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (!isdigit(*argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	}
	return (0);
}
