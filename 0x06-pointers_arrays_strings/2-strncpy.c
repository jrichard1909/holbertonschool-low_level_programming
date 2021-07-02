#include "holberton.h"

/**
 * _strncpy - prints the last digit of a number
 * @dest: The first array
 * @src: The second array
 * @n: num of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count2;

	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count2] = src[count2];
	}

	for ( ; count2 < n; count2++)
	{
		dest[count2] = '\0';
	}

	return (dest);
}
