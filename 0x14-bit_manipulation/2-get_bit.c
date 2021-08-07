/**
 * get_bit - prints the last digit of a number
 * @n: The number to print
 * @index: index
 *
 * Return: On success 1.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len = 0;
	unsigned long int n_val = 1, n2 = n;

	while (n2 > 0)
	{
		len++;
		n2 = n2 >> 1;
	}

	len -= 1;

	if (index > 63)
		return (-1);

	n_val = (n_val << index);

	if (n & n_val)
		return (1);

	return (0);
}
