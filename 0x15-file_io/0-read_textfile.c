#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: filename
 * @letter: number of letters to read from text
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, w, r;
	char *buffer;

	if (filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer)
		return (0);

	r = read(fd, buffer, letters);
	if (r)
		return (0);
	buffer[letters] = '\0';

	w = write(1, buffer, letters);
	if (w < letters)
		return (0);

	close(fd);

	return (r);
}
