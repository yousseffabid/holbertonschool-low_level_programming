#include "calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if ((get_op_func(argv[1])(atoi(argv[0]), atoi(argv[2])) == NULL))
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[2]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (get_op_func(argv[1])(atoi(argv[0]), atoi(argv[2])));
	return (0);
}

