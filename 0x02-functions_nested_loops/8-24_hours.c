#include "holberton.h"

/**
 * jack_bauer - prints the last digit of a number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void jack_bauer(void)
{
	int hd;
	int hu;
	int md;
	int mu;

	for (hd = 0; hd <= 2; hd++)
	{
		if (hd < 2)
		{
			for (hu = 0; hu < 10; hu++)
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
		else
		{
			for (hu = 0; hu < 4; hu++)
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
}
