#include "3-calc.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to array
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	f = get_op_func(argv[2]);
	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

