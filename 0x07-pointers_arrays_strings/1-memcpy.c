#include "holberton.h"

/**
 *  _memcpy - prints the last digit of a number
 * @dest: first pointer
 * @src: second array
 * @n: number of bytes
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = src[count];
	}

	return (dest);
}
