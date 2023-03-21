#include "main.h"
/**
 * _realloc - Function that reallocate a memory
 * ptr: pointer
 * old_size: The memory size
 * new_size: The new memory size
 * Return: Nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *ptr2;
	unsigned int i, j;

	if (old_size == new_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr2 = malloc(new_size * sizeof(char));
			if (ptr2 == NULL)
				return (NULL);

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			ptr2[i] = ((char *)ptr)[i];
		}
		free(ptr);
		return (ptr2);
	}

	else
	{
		for(j = 0; j < new_size; j++)
		{
			ptr2[j] = ((char *)ptr)[j];
		}
		free(ptr);
		return (ptr2);
	}
}
