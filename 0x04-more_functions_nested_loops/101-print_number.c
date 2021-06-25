#include "holberton.h"

/**
 * print_number - prints the last digit of a number
 * @n: The number to print
 *
 */

void print_number(int n)
{
	int b, c, i, base, digit;
	unsigned int num_copy, num;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	num_copy = num;
	b = 1;
	while (num / 10 >= 1)/*contador de digitos = b */
	{
		num = num / 10;
		b++;
	}
	for (i = b; i > 0; i--)
	{
		base = 1;
		for (c = 0; c < i - 1; c++)
		{
			base *= 10;
		}
		digit = (num_copy / base) % 10;

		_putchar('0' + digit);
	}
}
