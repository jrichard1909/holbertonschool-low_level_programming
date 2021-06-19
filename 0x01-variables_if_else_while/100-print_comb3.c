#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			if (a < b)
			{
				putchar (a + '0');
				putchar (b + '0');
				if (a < 8)
				{
					putchar (44);
					putchar (32);
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
