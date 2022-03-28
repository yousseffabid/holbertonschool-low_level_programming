#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: filename
 * @letters: number of letters to read from text
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r;
	size_t w;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	r = read(fd, buffer, letters);
	if (r == -1)
		return (0);
	buffer[letters] = '\0';

	w = write(1, buffer, letters);
	if (w == -1)
		return (0);

	close(fd);

	return (r);
}