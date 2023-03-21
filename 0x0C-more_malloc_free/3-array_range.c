#include "main.h"
/**
 * array_range - Creates array of integers
 * @min - Minum number
 * @max -Maxum number
 * Return - An integer
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((max + 1) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		ptr[i] = i;
	}

	return (ptr);
}
