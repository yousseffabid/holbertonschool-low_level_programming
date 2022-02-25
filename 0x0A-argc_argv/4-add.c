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

	for (i = 0; i < argc; i++)
	{
		if ((*argv[i] >= 65 && *argv[i] <= 90) ||
				(*argv[i] >= 97 && *argv[i] <= 122))
		{
			printf("Error\n");
			return (1);
		}
		else
			result += atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}
