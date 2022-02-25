#include "main.h"
/**
 * main - check the code
 * @argc: number of arguments aupplied to program
 * @argv: array that contains the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = argv[1] * argv[2];
		printf("%d\n", result);
	}
	else
		printf("Error\n");
	return (0);
}
