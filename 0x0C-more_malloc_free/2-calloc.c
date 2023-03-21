#include "main.h"
/**
 * _calloc - Functions that allocates memory for an array
 * @nmemb: Number
 * @size: The Size
 * Return: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;
	unsigned int j;

	if (size == 0 || nmemb == 0)
		return (NULL);

	j = size * nmemb;

	ptr = malloc(j);

	if (ptr == NULL)

		return(NULL);

	for (i = 0; i < j; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
