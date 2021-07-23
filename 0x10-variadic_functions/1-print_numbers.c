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

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;
		
	if (separator == NULL)
		return;

	va_start(ap, n);
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(ap, int), separator);

	printf("%d\n", va_arg(ap, int));
	va_end(ap);
}
