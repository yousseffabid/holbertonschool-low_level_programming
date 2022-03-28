#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: filename
 * @letters: number of letters to read from text
 * Return: ssize_t
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
        w = write(fd, 0 , 0);

    if (w == -1)
        return (-1);

    return (1);
}
