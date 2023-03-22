#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Functions that prints dog
 * @d: Pointer to struct
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name: %s\n", d->name);
		}
		else 
			printf("Name: (nil)\n");

		if (d->age > 0)
		{
			printf("Age: %.06f", d->age);
		}
		else 
			printf("Age: (nil)\n");

		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else 
			printf("Owner: (nil)\n");
	}
}
