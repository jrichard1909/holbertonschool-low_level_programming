#include "holberton.h"

/**
 * wildcmp - prints the last digit of a number
 * @s1: first string
 * @s2: second string
 *
 * Return: On success 1.
 */

int wildcmp(char *s1, char *s2)
{
	int len1 = _strlen_recursion(s1), len2 = _strlen_recursion(s2);

	return (wildcmp2(s1, s2, 0, 0, len1 - 1, len2 - 1));
}

/**
 * _strlen_recursion - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
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

/**
 * wildcmp2 - prints the last digit of a number
 * @s1: first string
 * @s2: second string
 * @a: initial position s1
 * @b: initial position s2
 * @c: end position s1
 * @d: end position s2
 *
 * Return: On success 1.
 */

int wildcmp2(char *s1, char *s2, int a, int b, int c, int d)
{
	if ((*(s2 + b)  == '\0'  || (*(s2 + b) == 42 && *(s2 + b + 1)  == '\0')) &&
			*(s1 + a)  == '\0')
	{
		return (1);
	}
	if (*(s2 + b)  == '\0' || (*(s1 + a) != *(s2 + b) && *(s2 + b) != 42))
	{
		return (0);
	}
	if (*(s2 + b) == 42)
	{
		return (wildcmp3(s1, s2, a, b, c, d));
	}

	return (wildcmp2(s1, s2, a + 1, b + 1, c, d));
}

/**
 * wildcmp3 - prints the last digit of a number
 * @s1: first string
 * @s2: second string
 * @a: initial position s1
 * @b: initial position s2
 * @c: end position s1
 * @d: end position s2
 *
 * Return: On success 1.
 */

int wildcmp3(char *s1, char *s2, int a, int b, int c, int d)
{
	if (*(s2 + d) == 42 && b == d)
	{
		return (1);
	}

	if (*(s1 + c) != *(s2 + d) && *(s2 + d) != 42)
	{
		return (0);
	}
	if (*(s2 + d) == 42 && (*(s1 + c) == *(s2 + d - 1) || *(s2 + d - 1) == 42))
	{
		return (wildcmp3(s1, s2, a, b, c, d - 1));
	}

	if (*(s2 + d) == 42)
	{
		return (wildcmp2(s1, s2, a, b, c, d));
	}

	return (wildcmp3(s1, s2, a, b, c - 1, d - 1));
}
