#include "main.h"

/**
 * create_file - this function creates a file
 * @filename: the name of the file
 * @text_content: things to write to the file
 *
 * Return: 1 if success -1 if failed
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t nwrite;

	if (!filename)
		return (-1);


	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	len = strlen(text_content);
	nwrite = write(fd, text_content, len);
	close(fd);

	if (nwrite == -1)
		return (-1);
	return (1);
}
