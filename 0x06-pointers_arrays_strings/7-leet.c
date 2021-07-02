#include "holberton.h"

/**
 * leet - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *leet(char *s)
{
	int count1, count2, a = 5;
	char str[] = {'a', 'e', 'o', 't', 'l'};
	char str2[] = {'A', 'E', 'O', 'T', 'L'};
	char encode[] = {'4', '3', '0', '7', '1'};

	for (count1 = 0; s[count1] != '\0'; count1++)
	{
		for (count2 = 0; count2 < a; count2++)
		{
			if (s[count1] == str[count2] || s[count1] == str2[count2])
			{
				s[count1] = encode[count2];
			}
		}
	}

	return (s);
}
