#include "holberton.h"

/**
 * _isalpha - checks for number, lowercase and uppercase  character
 * @c: character input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
