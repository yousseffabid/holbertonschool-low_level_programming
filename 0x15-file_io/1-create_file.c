#include "main.h"

/**
 * create_file -  creates a file
 * @filename: filename
 * @text_content: text
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int w, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
		w = write(fd, text_content, strlen(text_content));
	else
	  w = write(fd, 0, 0);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
