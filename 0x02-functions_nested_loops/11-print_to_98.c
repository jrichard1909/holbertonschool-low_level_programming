#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers
 * from n to 98, followed by a new line.
 * @n: The number to print
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf ("%d, ", n);
		n = (n > 98) ? n - 1 : n + 1;
	}
	if (n == 98)
	{
		printf ("%d", n);
	}
	printf ("\n");
}
