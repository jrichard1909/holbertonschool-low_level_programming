#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 612852475143, b;

	for (b = 2; b <= a; b++)
	{
		while (a % b == 0 && a > 1)
		{
			a = a / b;
			printf("%ld\n", b);
		}
	}
	return (0);
}
