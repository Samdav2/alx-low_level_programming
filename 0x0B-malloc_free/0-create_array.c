#include "main.h"
/**
 * create_array - c program that helps to allocate memory and create array in c
 * @size: The size of the array to be created
 * @c: The character of the array to be created
 * Return: Nothing
 */
char *create_array(unsigned int size, char c)
{
	unsigned long int *ptr;

	unsigned int i = 0;
	int j = 0;
	
	ptr = (unsigned long int *)malloc(j + 1) * sizeof(char);

	for (i = 0; i < size; i++)
	{
		printf(" %c", c);
		*ptr = c;
		j++;
	}

	return (0);
}
