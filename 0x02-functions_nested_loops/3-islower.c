#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: character input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include "holberton.h"

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
