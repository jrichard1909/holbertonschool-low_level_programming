#include "holberton.h"
#include <stddef.h>

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
	while (*s != c && *s != '\0')
	{
		s++;
	}

	if (*s != '\0')
	{
		return (s);
	}
	else
		return (NULL);
}
