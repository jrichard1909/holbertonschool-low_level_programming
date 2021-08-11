#include "main.h"

/**
 * creat_w__file - prints the last digit of a number
 * @filename: ac
 * @read_n: n
 * @buf: buf
 *
 * Return: On success 1.
 */

void creat_w__file(const char *filename, char buf[], ssize_t read_n)
{

	int fd_to;
	ssize_t write_n, close_n;

	fd_to = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	write_n = write(fd_to, buf, read_n);
	if (write_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	close_n = close(fd_to);
	if (close_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", (int)fd_to);
		exit(100);
	}
}

/**
 * main - check the code
 * @ac: ac
 * @av: av
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	ssize_t read_n = 1;
	char buf[1024];
	int fd_from;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	while ((read_n = read(fd_from, buf, 1024)) != 0)
	{
		if (read_n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		creat_w__file(av[2], buf, read_n);
	}

	return (0);
}
