#include "holberton.h"

/**
 *  _strlen - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int len = 0;
	char *a;

	for (a = s; *a != '\0'; a++)
	{
		len += 1;
	}
	return (len);
}
