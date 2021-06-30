#include "holberton.h"

/**
 *  *_strcpy - prints the last digit of a number
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;
	char *s;

	for (s = src; *s != '\0'; s++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';

	return (dest);
}
