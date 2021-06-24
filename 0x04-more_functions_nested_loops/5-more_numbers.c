#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers
 * from 0 to 14
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void more_numbers(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
