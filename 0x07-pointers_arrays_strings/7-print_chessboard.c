#include "holberton.h"

/**
 * print_diagsums - prints the last digit of a number
 * @a: The number to print
 * @n: a
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagsums(int *a, int n)
{
	int i;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (i = 0; i < n; i++)
	{
		sum += a[(n + 1) * i];
		sum1 += a[(n - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
