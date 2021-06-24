#include "holberton.h"

/**
 * print_times_table - prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: The number to print
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n <= 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				c = a * b;
				if (b > 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar((c > 99 ? (c / 100) + '0' : 32));
					_putchar((c > 9 ? (c / 10 % 10) + '0' : 32));
					_putchar((c < 10 ? c + '0' : (c % 10) + '0'));
				}
				else
					_putchar('0');
			}
			_putchar('\n');
		}
	}
}
