#include "main.h"

/**
 * create_file - prints the last digit of a number
 * @filename: name of file
 * @text_content: text
 *
 * Return: On success 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[len])
		len++;

	write_n = write(fd, text_content, len);
	if (write_n == -1)
		return (-1);

	return (1);


}
