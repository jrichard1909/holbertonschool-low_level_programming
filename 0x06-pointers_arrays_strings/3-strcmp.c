#include "holberton.h"

/**
 * _strcmp - prints the last digit of a number
 * @s1: The number to print
 * @s2: second array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++;
		s2++;
	}

	if (*s1 != '\0')
		res = *s1 - *s2;

	return (res);
}
