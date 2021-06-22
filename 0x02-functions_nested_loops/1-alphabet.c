#include <unistd.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include "holberton.h"

void print_alphabet(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	_putchar (a);
	_putchar ('\n');

}
