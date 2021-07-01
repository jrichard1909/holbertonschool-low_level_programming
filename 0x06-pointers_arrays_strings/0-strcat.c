#include "holberton.h"

/**
 *  *_strcat - prints the last digit of a number
 * @dest: first array
 * @src: second array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	while (dest[count1] != '\0')
	{
		count1++;
	}

	while (src[count2] != '\0')
	{
		dest[count1] = src[count2];
		count2++;
		count1++;
	}

	return (dest);
}
