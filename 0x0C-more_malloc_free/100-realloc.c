#include "main.h"
/**
 * _realloc - C program that reallocates a memory block using malloc and free
 * @ptr: a non type pointer
 * @old_size: The old size of the memory allocation
 * @new_size: The new size of the allocation memory
 * Return: Non Specified pointer type
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy;
	unsigned int i;


	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
			return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy = (old_size < new_size) ? old_size : new_size;

	for (i = 0; i < copy; i++)
	{
		((char *)new_ptr)[i] = ((char *)ptr)[i];
	}

	free(ptr);

	return (new_ptr);
}
