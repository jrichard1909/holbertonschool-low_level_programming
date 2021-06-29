#include "holberton.h"

/**
 * puts2 - prints every other character of a string
 * @str: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts2(char *str)
{
	char *s;

	for (s = str; *s != 0; s = s + 2)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
