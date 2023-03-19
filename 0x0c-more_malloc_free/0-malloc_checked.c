#include "main.h"
/**
 * malloc_checked - This functions allocates memory
 * @b: The value of the memory to be stored
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	exit (98);
}
