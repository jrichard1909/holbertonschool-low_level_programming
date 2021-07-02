#include "holberton.h"

/**
 *  reverse_array - prints the last digit of a number
 * @a: The number to print
 * @n: size of array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int count1, count2 = 0, num;

	for (count1 = n - 1; count1 > count2; count1--)
	{
		num = a[count1];
		a[count1] = a[count2];
		a[count2] = num;
		count2++;
	}
}
