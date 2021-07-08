#include "holberton.h"

/**
 * _sqrt_recursion - prints the last digit of a number
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _sqrt_recursion(int n)
{

	return (_sqrt_r2(n, n, 0));
}

/**
 * _sqrt_r2 - a
 * @a: a
 * @b: b
 * @c: c
 *
 * Return: a
 */

int _sqrt_r2(int a, int b, int c)
{
	if (b <= 0 || (b == c && b * c != a))
	{
		return (-1);
	}
	else if (b * b == a)
	{
		return (b);
	}
	c = b;
	b = (a / b + b) / 2;
	_sqrt_r2(a, b, c);

	return(_sqrt_r2(a, b, c));
}
