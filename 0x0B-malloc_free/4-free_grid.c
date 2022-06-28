#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional
 * grid previously created by your alloc_grid
 * @grid: pointer to pointer
 * @height: array
 * Return: Always return 0
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
