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
		a = (a % 10) * -1;
		_putchar(a + '0');
		return (a);
	}
	else
	{
		a = (a % 10);
		_putchar(a + '0');
		return (a);
	}
}
