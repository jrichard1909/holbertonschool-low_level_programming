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
	int n1 = 0, n2 = 0, i = 0;
	char *s;

	if (s1 != NULL)
	{
		n1 = _strlen_recursion(s1);
	}
	if (s2 != NULL)
	{
		n2 = _strlen_recursion(s2);
	}

	s = malloc(n1 + n2 + 1);
	if (s == NULL)
		return (0);

	for (i = 0; i < n1; i++)
		s[i] = s1[i];

	for (; i < n1 + n2; i++)
		s[i] = s2[i - n1];

	s[i] = '\0';

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
