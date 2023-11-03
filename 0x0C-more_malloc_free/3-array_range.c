#include "main.h"
/**
 * array_range - C program that creates an array of integers
 * @min: the minimum number of the array
 * @max: The maximum number of the array
 * Return: an integer pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *pointer;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = (max - min) + 1;

	pointer = malloc((size) * sizeof(int));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
