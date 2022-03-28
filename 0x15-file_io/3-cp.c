#include "main.h"

/**
 * _cp - copy file content to another file
 * @src: source file
 * @dst: destination file
 * Return: void
 */

void _cp(const char *src, const char *dst)
{
	char buffer[1024];
	int r, fd_from, fd_to;

	fd_from = open(src, O_RDONLY);
	if (fd_from == -1 || src  == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd_to = open(dst, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, r) != r || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dst);
			exit(99);
		}
	}

	if (r  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
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
}

/**
 * main - main function
 * @argc: number of arguments
 * @argv: pointer to arguments
 * Return: int 1 on success and 0 on failure
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	_cp(argv[1], argv[2]);

	return (0);
}
