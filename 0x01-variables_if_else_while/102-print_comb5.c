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
	int c;
	int d;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			for (c = 0 ; c <= 9 ; c++)
			{
				for (d = 0 ; d <= 9 ; d++)
				{
					if (a < c || (a == c && b < d))
					{
					putchar (a + '0');
					putchar (b + '0');
					putchar (32);
					putchar (c + '0');
					putchar (d + '0');
					if ((a < 9 && b <= 9) || (a == 9 && b < 8))
					{
						putchar (44);
						putchar (32);
					}
					}
				}
			}
		}
	}
	putchar ('\n');

	return (0);
}
