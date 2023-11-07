#ifndef _DOG_H_
#define _DOG_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - C program that  create structure for a c program
 * @name: The name of the user
 * @age: The age of the user
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
