#include "function_pointers.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
