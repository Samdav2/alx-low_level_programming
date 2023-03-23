#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Functions that free dog
 * @d: The point that point to dog to be freed
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
