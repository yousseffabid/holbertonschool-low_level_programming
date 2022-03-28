#include "main.h"
/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: text
 * Return: int
 */

int main(int argc, char **argv)
{
    int fd_from, fd_to, r;
i   char *buffer;
    if ( argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit (97);
    }
    fd_from = open(argv[1], O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %S\n", argv[1]);
        exit(98);
    }
    fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
    r = 1;
    while(r)
    {
        buffer = malloc(1024);
        r = read(fd_from, buffer, 1024);
        write(fd_to, buffer, 1024);
        free(buffer);
    }
    if(close(fd_to))
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
        exit(100);
    }
    if (close(fd_from))
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
        exit(100);
    }

    return (0);
}
