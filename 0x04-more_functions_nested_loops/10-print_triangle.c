#include "holberton.h"

/**
 * print_triangle -  prints a triangle, followed by a new line.
 * @size: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_triangle(int size)
{
	int a, b, c, d = size, e = 0;

	if (size > 0)
	{
		for (c = 0; c < size; c++)
		{
			d--;
			for (b = d; b > 0; --b)
			{
				_putchar(32);
			}
			e++;
			for (a = 0; a < e; a++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
