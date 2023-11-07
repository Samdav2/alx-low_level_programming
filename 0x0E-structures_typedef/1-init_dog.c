#include "dog.h"
/**
 * init_dog - C program that initialize of type struct dog
 * @d: A pointer to the structure
 * @name: The name in the struct
 * @age: The age in the structure
 * @wner: The name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{

		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
