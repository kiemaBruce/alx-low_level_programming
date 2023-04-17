#include "main.h"

/**
  * free_grid - frees a 2D grid previously created alloc_grid function
  * @grid: the 2 dimensional array to be freed
  * @height: the number of rows in the 2 dimensional array
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
