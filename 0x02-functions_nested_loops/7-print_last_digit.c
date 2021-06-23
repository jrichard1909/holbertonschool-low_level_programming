#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print_last_digit(int a)
{
	if (a < 0)
	{
		_putchar((a * -1) % 10 + '0');
		return ((a * -1) % 10);
	}
	else
	{
		_putchar(a % 10 + '0');
		return ((a % 10));
	}
}
