#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - prints the last digit of a number
 * @str: The number to print
 *
 * Return: On success 0.
 */

char **strtow(char *str)
{
	char **s, *w;
	int lenw, i, j, lens;

	lenw = wordslen(str);
	if (str == NULL || *str == '\0' || lenw == 1)
		return (0);

	s = malloc(lenw * sizeof(char *) + 1);
	if (s == NULL)
		return (0);

	for (i = 0; i < lenw; i++)
	{
		lens = lenstrw(str, i) + 1;
		w = strw(str, i, lens);
		s[i] = malloc(lens);
		if (s[i] == NULL)
			return (0);

		for (j = 0; j < lens; j++)
			s[i][j] = w[j];
	}
	s[i] = malloc(1);
	s[i] = NULL;

	return (s);
}

/**
 * wordslen - prints the last digit of a number
 * @str: The number to print
 *
 * Return: On success 0.
 */

int wordslen(char *str)
{
	int len = 0;

	if (*str != 32)
		len++;
	while (*str != '\0')
	{
		if (*str == 32 && *(str + 1) != 32 && *(str + 1) != '\0')
			len++;
		str++;
	}

	return (len);
}

/**
 * lenstrw - prints the last digit of a number
 * @str: The number to print
 * @n: n
 *
 * Return: On success 0.
 */

int lenstrw(char *str, int n)
{
	int len = 0, lenw = 0, i;

	if (*str != 32)
		len++;
	while (*str != '\0')
	{
		if (len == n + 1)
		{
			for (i = 0; *(str + i) != 32; i++)
				lenw++;

			return (lenw);
		}
		if (*str == 32 && *(str + 1) != 32 && *(str + 1) != '\0')
			len++;
		str++;
	}

	return (0);
}

/**
 * strw- prints the last digit of a number
 * @str: The number to print
 * @n: n
 * @len: len
 *
 * Return: On success 0.
 */

char *strw(char *str, int n, int len)
{
	int i, j = 0;
	char *s;

	s = malloc(len);

	if (*str != 32)
		j++;
	while (*str != '\0')
	{
		if (j == n + 1)
		{
			for (i = 0; i < len - 1; i++)
				s[i] = *(str + i);
			s[i] = '\0';

			return (s);
		}
		if (*str == 32 && *(str + 1) != 32 && *(str + 1) != '\0')
			j++;
		str++;
	}

	return (s);
}
