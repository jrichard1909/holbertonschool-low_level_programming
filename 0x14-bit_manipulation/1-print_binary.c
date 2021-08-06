#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

void print_binary(unsigned long int n)
{
	int ind = 0;
	unsigned long int n_val = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	
	n_val = n_val << 31;

	while (n_val > 0 )
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
