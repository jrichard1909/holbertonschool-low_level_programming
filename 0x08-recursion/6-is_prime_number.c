#include "holberton.h"

/**
 *  is_prime2 - prints the last digit of a number
 * @a: The number to print
 * @b : b
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int is_prime2(int a, int b)
{
	if (a <= 1)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}

	return (is_prime2(a, b - 1));
}

/**
 * is_prime_number - prints the last digit of a number
 * @n: The number to print
 *
 * Return: On success 1.
 */

int is_prime_number(int n)
{
	return (is_prime2(n, n / 2));
}
