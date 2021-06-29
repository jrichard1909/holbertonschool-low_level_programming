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
	int count1 = 0;

	for (s = str; *s != 0; s++)
	{
		if (count1 % 2 == 0)
		{
			_putchar(*s);
		}
		count1++;
	}
	_putchar('\n');
}
