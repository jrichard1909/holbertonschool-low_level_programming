#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - prints the last digit of a number
 * @s1: s1
 * @s2: s2
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *str_concat(char *s1, char *s2)
{
	int n1 = _strlen_recursion(s1), n2 = _strlen_recursion(s2), i1 = 0, i2 = 0;
	char *s;

	s = malloc(n1 + n2);
	if (s == NULL)
		return (0);
	if (s1 != NULL)
	{
		for (i1 = 0; i1 < n1; i1++)
			s[i1] = s1[i1];
	}
	if (s2 != NULL)
	{
		for (i2 = 0; i2 < i1 + n2; i2++)
			s[i1 + i2] = s2[i2];
	}
	s[i1 + i2] = '\0';

	return (s);
}

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
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
