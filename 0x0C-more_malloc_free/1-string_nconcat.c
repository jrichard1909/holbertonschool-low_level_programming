#include <stdlib.h>
#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0, i;
	char *str;

	if (s1 != NULL)
		lens1 = _strlen_recursion(s1);
	if (s2 != NULL)
	{
		if (_strlen_recursion(s2) <= n)
		{
			lens2 = _strlen_recursion(s2);
		}
		else
		{
			lens2 = n;
		}
	}

	str = malloc(lens1 + lens2 + 1);
	if (str == NULL)
		return (0);
	for (i = 0; i < lens1; i++)
		str[i] = s1[i];
	for (; i < lens1 + lens2; i++)
		str[i] = s2[i - lens1];

	str[i] = '\0';

	return (str);
}

/**
 * _strlen_recursion  - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
