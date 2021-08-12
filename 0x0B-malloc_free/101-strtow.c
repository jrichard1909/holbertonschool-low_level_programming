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
	char **s;
	int lenw, i;

	lenw = wordslen(str);
	if (str == NULL || *str == '\0' || lenw == 1)
		return (0);

	s = malloc((lenw + 1) * sizeof(char *));
	if (s == NULL)
		return (0);

	for (i = 0; i < lenw; i++)
	{
		s[i] = strw(str, i);
		if (s[i] == NULL)
		{
			free(s);
			return (0);
		}
	}
	s[i] = NULL;

	return (s);
}

/**
 * wordslen - prints the last digit of a number
 * @ia: The number to print
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

char *strw(char *str, int n)
{
	int i = 0, j = 0, k = 0, len = lenstrw(str, n);
	char *str_dup;

	str_dup = malloc((len + 1) * sizeof(char));
	if (str_dup == NULL)
		return (0);

	if (*str != 32)
		j++;
	while (str[i])
	{
		if (j == n + 1)
		{
			for (; k < len; i++)
				str_dup[k++] = str[i];
			str_dup[k] = '\0';    
			break;
		}
		if (str[i] == 32 && str[i+ 1] != 32 && str[i+ 1] != '\0')
			j++;
		i++;
	}
	return (str_dup);
}
