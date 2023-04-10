#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t fd, len;
    char *buf;

    if (!filename)
        return (0);
    fd = open(filename, O_RDONLY);
    buf = malloc(letters * sizeof(char));
    if (!buf)
        return (0);

    /* Read file contents and dump them in the buffer*/
    len = read(fd, buf, letters);
    close(fd);
    
    /* Write contents from buffer to stdout */
    write(1, buf, len);
    putchar('\n');
    len++;
    free(buf);
    
    return (len);
}
