#include "holberton.h"

/**
 * cap_string - prints the last digit of a number
 * @s1: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *cap_string(char *s1)
{
	char str[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}'};
	int count1, count2;

	for (count1 = 0; s1[count1] != '\0'; count1++)
	{
		for (count2 = 0; str[count2] != '\0'; count2++)
		{
			if ((s1[count1] == str[count2]) && s1[count1 + 1] > 96 &&
			s1[count1 + 1] < 123)
			{
				s1[count1 + 1] = s1[count1 + 1] - 32;
			}
			else if (count1 == 0 && s1[count1] > 96 && s1[count1] < 123)
			{
				s1[count1] = s1[count1] - 32;
			}
		}
	}

	return (s1);
}
