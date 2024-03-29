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

	if (min > max)
	{
		return (NULL);
	}

	pointer = malloc((max + 1) * sizeof(int));

	if (pointer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < max + 1; i++)
	{
		pointer[i] = min++;
	}
	return (pointer);
}
