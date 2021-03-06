#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - prints the last digit of a number
 * @width: width
 * @height: height
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int **alloc_grid(int width, int height)
{
	int i, h, w;
	int **g;

	if (width <= 0 || height <= 0)
		return (0);

	g = malloc(height * sizeof(int *));

	if (g == NULL)
		return (0);

	for (i = 0; i < height;  i++)
	{
		g[i] = malloc(width * sizeof(int));
		if (g[i] == NULL)
		{
			for (i = 0; i < width; i++)
				free(g[i]);
			free(g);
			return (0);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			g[h][w] = 0;
		}
	}

	return (g);
}
