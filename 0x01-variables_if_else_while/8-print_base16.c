#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char a;
	int b;

	for (b = 0 ; b <= 9 ; b++)
	putchar (b + '0');
	for (a = 'a' ; a <= 'f' ; a++)
	putchar (a);
	putchar ('\n');

	return (0);
}
