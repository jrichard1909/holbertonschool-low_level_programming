#include "holberton.h"

/**
 * _isupper - prints the last digit of a number
 * @c: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
