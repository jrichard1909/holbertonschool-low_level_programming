#include "main.h"

/**
 * read_tfile - prints the last digit of a number
 * @filename: ac
 * @letters: av
 * @buf: buf
 *
 * Return: On success 1.
 */


ssize_t read_tfile(const char *filename, size_t letters, char buf[])
{
	ssize_t read_n, close_n;
	int fd_from;

	fd_from = open(filename, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	read_n = read(fd_from, buf, letters);
	if (read_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}

	close_n = close(fd_from);
	if (close_n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", (int)fd_from);
		exit(100);
	}

	return (read_n);
}

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
	ssize_t read_n = 0;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	
	while (read_n  == 0 || read_n == 1024)
	{
		read_n = read_tfile(av[1], 1024, buf);
		creat_w__file(av[2], buf, read_n);
	}

	return (0);
}
