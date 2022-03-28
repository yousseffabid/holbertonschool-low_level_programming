#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
