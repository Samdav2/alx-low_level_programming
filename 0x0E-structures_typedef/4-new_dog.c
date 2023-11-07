#include "dog.h"
/**
 * new_dog - C function that creates  a new dog
 * @name: Name in the function
 * @age: Age in the structur
 * @owner: Onwer in the structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_ptr;
	char *name2, *owner2;

	new_ptr = malloc(sizeof(dog_t));

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	name2 = strdup(name);
	owner2 = strdup(owner);

	if (owner2 == NULL || name2 == NULL)
	{
		free(new_ptr);
		free(name2);
		free(owner2);
		return (NULL);
	}

	new_ptr->name = name2;
	new_ptr->owner = owner2;
	new_ptr->age = age;

	return (new_ptr);
}
