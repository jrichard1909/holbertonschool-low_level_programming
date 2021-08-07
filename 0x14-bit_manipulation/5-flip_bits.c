/**
 * flip_bits - prints the last digit of a number
 * @n: n
 * @m: m
 *
 * Return: On success 1.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n_val;
	int count = 0;

	n_val = (n ^ m);

	while (n_val > 0)
	{
		if (n_val & 1)
			count++;
		n_val = n_val >> 1;
	}

	return (count);
}
