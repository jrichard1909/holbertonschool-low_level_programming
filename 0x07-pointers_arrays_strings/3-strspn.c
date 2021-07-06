#include "holberton.h"

/**
 * _strspn - prints the last digit of a number
 * @s: The number to print
 * @accept: second array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, count2;

	while (*s != '\0')
	{
		count2 = 0;
		while (accept[count2] != '\0' && accept[count2] != *s)
		{
			count2++;
			if (accept[count2] == *s)
			{
				count++;
			}
		}
		s++;
	}

	return (count);
}
