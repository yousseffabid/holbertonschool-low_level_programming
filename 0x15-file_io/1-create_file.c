#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to stdout
 * @filename: filename
 * @letters: number of letters to read from text
 * Return: ssize_t
 */
int create_file(const char *filename, char *text_content)
{
    int i, fd;

    if (filename == NULL)
        return (-1);
    fd = open(filename, O_RDWR | O_CREAT | O_TRUNCR, 0300);
    if (text_content != NULL)
    {
        i = 0;
        while (*text_content)
            i++;
        write(fd, text_content, i);
    }
    return (1);
}
