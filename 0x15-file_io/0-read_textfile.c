#include "main.h"

/**
 * read_textfile- read a text file and print it to the POSIX standart output
 * @filename: the name of the file
 * @letters: number of characters to read
 *
 * Return: the actual number of letter and characters that could be read else 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread;
	char *buf;

	buf = malloc((letters + 1) * sizeof(char));
	if (!filename || !buf)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	nread = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, nread);
	if (nread != (ssize_t) letters)
	{
		nread++;
		write(STDOUT_FILENO, "\n", 1);
	}
	close(fd);
	free(buf);

	return (nread);
}
