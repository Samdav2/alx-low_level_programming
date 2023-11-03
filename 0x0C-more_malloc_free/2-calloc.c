#include "main.h"
/**
 * _calloc - C program that allocate memory for an array
 * @nmemb: The array
 * @size: The size of the array
 * Return: pointer to to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pointer;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc((nmemb * size) * sizeof(int));

	 return (pointer);
}
