#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function to return a pointer to a two dimensional
 * array of integers
 * @width:size of columns of the arrays
 * @height:size of rows of the arrays
 *
 * Return:pointer to array
 */

int **alloc_grid(int width, int height)
{
	int k, p;
	int **grid;

	if (height == 0 || height < 0)
		return (NULL);
	if (width == 0 || width < 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < height; p++)
	{
		grid[p] = malloc(width * sizeof(int));
		if (grid[p] == 0)
		{
			for (k = 0; k <= p; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (p = 0; p < height; p++)
	{
		for (k = 0; k < width; k++)
		{
			grid[p][k] = 0;
		}
	}
	return (grid);
}
