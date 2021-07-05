#include "holberton.h"

/**
 * _memset  - prints the last digit of a number
 * @s: Pointer
 * @b: byte
 * @n : number of byte
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		s[count] = b;
	}

	return (s);
}
