#include "holberton.h"

/**
 * print_numbers - prints the last digit of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
