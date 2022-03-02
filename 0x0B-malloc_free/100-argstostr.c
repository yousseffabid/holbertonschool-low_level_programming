#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: pointer to pointers
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i, j, count, k;
	char *ptr;

	count = 0;
	if (ac == 0 || av == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			count++;
		}
	}
	ptr = malloc(sizeof(char) * (count + ac + 1));
	if (ptr == 0)
	{
		free(ptr);
		return (NULL);
	}
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k++] = '\n';
	}
	ptr[k] = '\0';
	return (ptr);
}

