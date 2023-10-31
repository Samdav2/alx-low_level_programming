#include "main.h"
/**
 * free_grid - C function that frees the grid arrays
 * @grid: The pointer to the grid
 * @height: The height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
