#include "main.h"
/**
 * create_array - c program that helps to allocate memory and create array in c
 * @size: The size of the array to be created
 * @c: The character of the array to be created
 * Return: Nothing
 */
char *create_array(unsigned int size, char c)
{

	unsigned int i = 0;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
