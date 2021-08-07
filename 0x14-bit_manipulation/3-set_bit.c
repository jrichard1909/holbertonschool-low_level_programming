/**
 * set_bit  - prints the last digit of a number
 * @n: pointer
 * @index: index 
 *
 * Return: On success 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int num = *n;
	unsigned long int n_val = 1;

	if (index > 63)
		return (-1);

	n_val = (n_val << index);
	num += n_val;
	*n = num;

	return(1);
}
