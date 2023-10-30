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
	unsigned int *ptr;

	ptr = malloc((size + ) * sizeof(int));

	for (i = 0; i < size; i++)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}

		*ptr = c;

		printf("0x%02x", c);
	}

	free(ptr);

	return (0);
}
