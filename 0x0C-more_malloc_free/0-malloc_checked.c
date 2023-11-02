#include "main.h"
/**
 * malloc_checked - A  function that allocate memory using malloc
 * @b: The number of memory to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
	{
		exit (98);
	}
	malloc = (b);
}
