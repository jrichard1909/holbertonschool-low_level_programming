#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @: pointer
 *
 * Return: On success num.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[len])
		len++;

	len -= 1;
	while (b[len])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		if (b[i] == '1')
			num += 1 << len;
		i++;
		len--;
	}

	return (num);
}
