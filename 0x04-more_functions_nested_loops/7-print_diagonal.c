#include "holberton.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagonal(int n)
{
	int a, b;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
