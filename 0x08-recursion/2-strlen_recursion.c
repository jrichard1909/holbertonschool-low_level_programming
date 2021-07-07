#include "holberton.h"

/**
 * _strlen_recursion  - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	return (1 + _strlen_recursion(s));
}
