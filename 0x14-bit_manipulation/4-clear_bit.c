/**
 * clear_bi t- prints the last digit of a number
 * @n: The number to print
 + @index: index
 *
 * Return: On success 1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = *n;
	unsigned long int n_val = 1;

	if (index > 63)
		return (-1);

	n_val = (n_val << index);

	if (n_val <= num)
		num -= n_val;
	*n = num;

	return(1);
}
