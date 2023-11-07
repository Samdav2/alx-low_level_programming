#include "dog.h"
/**
 * free_dog - C program that free the structure type dog
 * @d: the pointer to the structure
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}
