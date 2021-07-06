#include "holberton.h"

/**
 * _strchr - prints the last digit of a number
 * @s: The pointer
 * @c: The letter searched
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
	}

	return (s);
}
