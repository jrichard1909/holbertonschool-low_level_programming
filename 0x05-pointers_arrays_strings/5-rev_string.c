#include "holberton.h"

/**
 * rev_string - reverses a string.
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void rev_string(char *s)
{
	int len = 0, cont1, cont2 = 0;
	char *str, a[10], *st;

	st = a;
	for (str = s; *str != '\0'; str++)
	{
		st[len] = s[len];
		len++;
	}

	for (cont1 = len - 1; cont1 >= 0; cont1--)
	{
		s[cont2] = st[cont1];
		cont2++;
	}
}
