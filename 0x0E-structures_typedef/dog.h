#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * dog - C program that  create structure for a c program
 * @name: The name of the user
 * @age: The age of the user
 * @owner: The owner of the dog
 * Return: Nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
