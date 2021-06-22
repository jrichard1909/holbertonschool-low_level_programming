#include <unistd.h>

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * in lowercase
 * followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include "holberton.h"

void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0 ; b < 10 ; b++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		_putchar (a);
		_putchar ('\n');
	}
}
