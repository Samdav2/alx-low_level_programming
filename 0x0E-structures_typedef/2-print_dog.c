#include "dog.h"
/**
 * print_dog - C program that prints a struct dog
 * @d: A  pointer to the structure
 */
void print_dog(struct dog *d)
{

	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: (nil)\n");
	}

	if (d->age != 0)
	{
		printf("Age: %f\n", d->age);
	}
	else
	{
		printf("Age: (nil)\n");
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s", d->owner);
	}
	else
	{
		printf("Owner: (nil)\n");
	}
		
}
