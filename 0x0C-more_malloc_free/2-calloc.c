#include "main.h"
/**
 * _calloc - C program that allocate memory for an array
 * @nmemb: The array
 * @size: The size of the array
 * Return: pointer to to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	unsigned int i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc((nmemb * size) * sizeof(int));

	j = nmemb * size;

	for (i = 0; i < j; i++)
	{
		pointer[i] = 0;
	}
	 return (pointer);
}
