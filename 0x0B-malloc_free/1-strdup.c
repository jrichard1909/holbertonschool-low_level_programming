#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strdup(char *str)
{
	int n = _strlen_recursion(str), i;
	char *s;

	s = malloc(n);
	for (i = 0; i < n; i++)
		s[i] = str[i];

	return (s);
}


int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}

