#include "main.h"
/**
 * malloc_checked - A  function that allocate memory using malloc
 * @b: The number of memory to be allocated
 * Return: Nothing
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
