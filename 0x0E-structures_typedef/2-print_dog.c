#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - C program that prints a struct dog
 * @d: A  pointer to the structure
 */
void print_dog(struct dog *d)
{
	if (d)
	{

		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age >= 0)
			printf("Age: %.06f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (d->owner)
			printf("Owner: %s", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}
