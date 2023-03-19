#include "main.h"
/**
 * free_grid - Free the function grid
 * @grid: The grid
 * @height: The height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0;  height--)
			free(grid[height]);

		free(grid);
	}
}