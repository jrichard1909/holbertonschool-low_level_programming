#include "main.h"

/**
 * check_rwc - prints the last digit of a number
 * @n : ssize_t
 * @filename: name of file
 * @ind_rwc: indicate 1 read, 2 write, 3 close
 * @fd : fd
 *
 * Return: On success 1.
 */

void check_rwc(ssize_t n, char *filename, int ind_rwc, ssize_t fd)
{

	if (n == -1)
	{
		if (ind_rwc == 1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
			exit(98);
		}
		else if (ind_rwc == 2)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
			exit(99);
		}
		else if (ind_rwc == 3)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d", (int)fd);
			exit(100);
		}
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
	ssize_t read_n, write_n, close_n;
	char buf[1024];
	int fd_from, fd_to;

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

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
	S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((read_n = read(fd_from, buf, 1024)) != 0)
	{
		check_rwc(read_n, av[1], 1, fd_from);
		write_n = write(fd_to, buf, read_n);
		check_rwc(write_n, av[2], 2, fd_to);
	}

	close_n = close(fd_from);
	check_rwc(close_n, NULL, 3, fd_from);
	close_n = close(fd_to);
	check_rwc(close_n, NULL, 3, fd_to);

	return (0);
}
