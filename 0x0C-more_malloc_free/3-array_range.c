#include "main.h"
/**
 * array_range - Creates array of integers
 * @min: Minum number
 * @max: Maxum number
 * Return: An integer
 */
int *array_range(int min, int max)
{
	int i, j;
	int *ptr;
	int size;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (j = 0, i = min; i <= max; i++, j++)
	{
		ptr[j] = i;
	}

	return (ptr);
}
