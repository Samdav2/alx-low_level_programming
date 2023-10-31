#include "main.h"
/**
 * alloc_grid - C program that return a pointer to 2 dimensional array
 * @widht: The widht of the array
 * @height: The height of the array
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **pointer;

	if (width == 0)
		return (NULL);
	if (height == 0)
		return (NULL);

	pointer = malloc(height * sizeof(int *));

	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		pointer[i] = (int *)malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			while (--1 >= 0)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			pointer[i][j] = 0;
		}	
	}
	return (pointer);
}
