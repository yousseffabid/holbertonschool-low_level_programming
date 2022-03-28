#include "main.h"
/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: int 1 on success and 0 on failure
 */

int main(int argc, char **argv)
{
	int fd_from, fd_to, r;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1 || argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
  }

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	r = 1;
	while (r)
	{
		r = read(fd_from, buffer, 1024);
		if (write(fd_to, buffer, r) != r || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
  }


	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	return (0);
}
