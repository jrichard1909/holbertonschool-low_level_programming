#include "holberton.h"

/**
 * _strpbrk - prints the last digit of a number
 * @s: The number to print
 * @accept: a
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strpbrk(char *s, char *accept)
{
	int count;

	while (*s != '\0')
	{
		count = 0;
		while (*(accept + count) != '\0')
		{
			if (*(accept + count) == *s)
			{
				return (s);
			}
			count++;
		}
		s++;
	}

	return (0);
}
