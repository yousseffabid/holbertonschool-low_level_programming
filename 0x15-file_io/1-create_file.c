#include "main.h"

/**
 * create_file -  creates a file
 * @filename: filename
 * @text_content: text
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int i, w, fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (*text_content)
			i++;

		w = write(fd, text_content, i);
	}
	else
	  w = write(fd, 0, 0);

	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
