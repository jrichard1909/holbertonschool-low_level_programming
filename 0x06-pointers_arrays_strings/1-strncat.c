#include "holberton.h"

/**
 * _strncat - prints the last digit of a number
 * @dest: The first array
 * @src: The second array
 * @n: n of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count1 + count2] = src[count2];
	}

	return (dest);
}
