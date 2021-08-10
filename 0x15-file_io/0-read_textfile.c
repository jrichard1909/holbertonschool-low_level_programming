#include "main.h"

/**
 * read_textfile - prints the last digit of a number
 * @filename: The number to print
 * @letters: letters
 *
 * Return: On success 1.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_n, write_n;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	read_n = read(fd, buf, letters);
	if (read_n == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	write_n = write(2, buf, read_n);
	if (write_n == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	close(fd);
	return (write_n);
}
