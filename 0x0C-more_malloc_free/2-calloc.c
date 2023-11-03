#include "main.h"
/**
 * _calloc - C program that allocate memory for an array
 * @nmemb: The array
 * @size: The size of the array
 * Return: pointer to to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int n;

	int *pointer;

	for(i = 0; i <= nmemb;)
	{
		for(n = 0; n <= size;)
		{
			n++;
		}
		i++;
	}
	pointer = malloc((n + i) * sizeof(int));

	 return (pointer);
}
