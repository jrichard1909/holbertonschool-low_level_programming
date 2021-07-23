#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list ap;

	if (n <= 0)
	{
		printf("\n");
		return;
	}

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		if (s == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", s);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
