#include "holberton.h"

/**
 * strl - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 */

int strl(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (1 + strl(s));
}

/**
 * is_palind2 - prints the last digit of a number
 * @s: The number to print
 * @a: a
 * @len: n
 *
 * Return: On success 1.
 */

int is_palind2(char *s, int a, int len)
{
	if (len < a)
	{
		return (1);
	}
	if (*(s + a) == *(s + len))
	{
		return (0);
	}

	return (is_palind2(s, a + 1, len - 1));
}

/**
 * is_palindrome - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 */

int is_palindrome(char *s)
{
	int a = 0, len = strl(s);

	return (is_palind2(s, a, len));
}
