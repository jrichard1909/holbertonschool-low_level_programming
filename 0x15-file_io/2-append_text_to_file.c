#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of file
 * @text_content: text append
 *
 * Return: On success 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	while (text_content)
		len++;

	write_n = write(fd, text_content, len);
	if (write_n == -1 || write_n < len)
	{
		close(fd);
		return (-1);
	}
	
	close(fd);
	return (1);
}
