#include "holberton.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_rev(char *s)
{
	char *str;
	int len = 0, i;

	for (str = s; *str != '\0'; str++)
	{
		len += 1;
	}
	for (i = len; i > 0; i--)
	{
		_putchar(*(s + i - 1));
	}
	_putchar('\n');
}
