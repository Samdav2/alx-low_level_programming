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
	int *pointer;
	int multi;

	if (widht == 0)
		return (NULL);
	if (height == 0)
		return (NULL);

	multi = height * width;

	pointer = malloc(multi + 1) * sizeof(int);

	if (pointer == NULL)
		return(NULL);

	return (pointer);

}
