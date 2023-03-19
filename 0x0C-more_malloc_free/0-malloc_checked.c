#include "main.h"
/**
 * malloc_checked - Functions that allocates memory 
 * @b: The value of the memory
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));

	if (ptr == NULL)
	exit (98);
}