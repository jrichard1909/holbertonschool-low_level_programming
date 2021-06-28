#include "holberton.h"

/**
 * swap_int - prints the last digit of a number
 * @a: The number to print
 * @b: Second number.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*b = c;
	*a = d;
}
