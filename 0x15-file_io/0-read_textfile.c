#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: filename
 * @letters: number of letters to read from text
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int  fd, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r = read(fd, buffer, letters);

	write(STDOUT_FILENO, buffer, letters);

	free(buffer);
	close(fd);

	return (r);
}
