#include "holberton.h"

/**
 * print_line - prints the last digit of a number
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar(95);
		}
	}
	_putchar('\n');
}
