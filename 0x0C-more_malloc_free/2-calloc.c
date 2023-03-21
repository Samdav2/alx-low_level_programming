#include "main.h"
/**
 * _calloc - Functions that allocates memory for an array
 * @nmemb: Number
 * @size: The Size
 * Retunrn: Nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if ((size || nmemb) == 0)
		return (NULL);

	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return(NULL);

	for (i = 0; i < size; i++)
	{
		nmemb++;
		ptr[i] = nmemb;
	}

	ptr[i] = 0;

	return (ptr);
}
