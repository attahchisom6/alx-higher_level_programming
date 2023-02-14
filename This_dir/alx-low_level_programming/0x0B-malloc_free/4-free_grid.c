#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function will free the memory allocated
 * to the height parameter in  2D function grid
 * @grid:pointer to the 2 array
 * @height:size of row of the array
 *
 * Return:void
 */

void free_grid(int **grid, int height)
{
	int k;

	k = 0;
	while (k < height)
	{
		free(grid[k]);
		k++;
	}
	free(grid);
}
