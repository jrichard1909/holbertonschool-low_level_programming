#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int contador, b = 0;

	for (contador = 3; contador  < 1024; contador++)
	{
		if (contador % 3 == 0 || contador % 5 == 0)
		{
			b += contador;
		}
	}
	printf("%d\n", b);
	return (0);
}
