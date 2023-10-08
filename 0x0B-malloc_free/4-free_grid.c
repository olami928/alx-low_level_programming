#include "main.h"
/**
 * free_grid - free the memory of a two dimensional array
 * @grid: the grid
 * @height: height of the grid
 * Return: 0 on success
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
