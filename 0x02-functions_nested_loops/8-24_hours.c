#include "holberton.h"

/**
 * jack_bauer - prints the last digit of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int hd, hu, md, mu, a;

	for (hd = 0; hd <= 2; hd++)
	{
		if (hd < 2)
		{
			a = 10;
		}
		else
		{
			a = 4;
		}
		for (hu = 0; hu < a; hu++)
		{
			for (md = 0; md < 6; md++)
			{
				for (mu = 0; mu < 10; mu++)
				{
					_putchar(hd + '0');
					_putchar(hu + '0');
					_putchar(58);
					_putchar(md + '0');
					_putchar(mu + '0');
					_putchar('\n');
				}
			}
		}
	}
}
