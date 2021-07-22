#include <stddef.h>
#include "3-calc.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: The number to print
 *
 * Return: On success 1.
 *
 */

int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
		};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
			return (ops[i].f);

		i++;
	}

	return (0);
}
