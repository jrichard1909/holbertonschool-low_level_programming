#include "holberton.h"
#include <unistd.h>

/**
 * _abs - checks for lowercase character
 * @a: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}
