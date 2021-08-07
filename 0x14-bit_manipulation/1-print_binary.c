#include "main.h"

/**
 * print_binary - prints the last digit of a number
 * @n: The number to print
 *
 * Return: On success 1.
 */

void print_binary(unsigned long int n)
{
	int ind = 0;
	unsigned long int n_val = 1, len = 0, n2 = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n2 > 0)
	{
		len++;
		n2 = n2 >> 1;
	}
	len -= 1;

	n_val = (n_val << len);

	while (n_val > 0)
	{
		if (n & n_val)
		{
			_putchar('1');
			ind = 1;
		}
		else if (ind == 1)
			_putchar('0');

		n_val = n_val >> 1;
	}

}
