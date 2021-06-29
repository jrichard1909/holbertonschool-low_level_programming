#include "holberton.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void _puts(char *str)
{
	char *s;

	for (s = str; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
