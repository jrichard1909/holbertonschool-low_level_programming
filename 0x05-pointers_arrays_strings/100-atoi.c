#include "holberton.h"

/**
 * _atoi  - prints the last digit of a number
 * @s: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _atoi(char *s)
{
	int num = 0, numsigno = 1;
	char signo = '+';

	while ((*s < '0' || *s > '9') && *s != '\0')
	{
		if (*s == '-' || *s == '+') 
		{
			signo = (signo == *s) ? '+' : '-';
		}
		s++;
	}
	numsigno = 1 - 2 * (signo == '-');

	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + *s - '0';
		s++;
	}

	return (num * numsigno);
}
