#include "holberton.h"

/**
 * *string_toupper - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *string_toupper(char *s)
{
	int count1;

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		if (s[count1] > 96 && s[count1] < 123)
		{
			s[count1] = s[count1] - 32;
		}
	}

	return (s);
}
