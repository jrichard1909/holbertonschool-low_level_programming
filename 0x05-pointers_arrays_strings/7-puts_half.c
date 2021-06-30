#include "holberton.h"

/**
 * puts_half - prints the last digit of a number
 * @str: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void puts_half(char *str)
{
	char *s;
	int len = 0, len2, count1;

	for (s = str; *s != '\0'; s++)
	{
		len++;
	}
	len2 = len / 2;
	if (len % 2 != 0)
	{
		len2++;
	}
	for (count1 = len2; count1 < len; count1++)
	{
		_putchar(*(str + count1));
	}
	_putchar('\n');
}
