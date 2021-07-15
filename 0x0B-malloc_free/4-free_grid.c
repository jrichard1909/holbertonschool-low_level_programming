#include <stdlib.h>
#include "holberton.h"

/**
 * - prints the last digit of a number
 * @grid: The number to print
 * @height: h
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);

}
