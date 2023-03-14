#include "main.h"
/**
 * create_array - Functions that create an array of character
 * @size: Size of the array
 * @c: The chraacters
 * Return: A character
 */
char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i = 0;


	if (size == 0)
	return (NULL);


	if (n = NULL)
	{
	return (NULL);
	}
	n = malloc(size  * sizeof(char));

	while (i < size)
	{
	n[i] = c;
	i++;
	}
	free(n);
	return (n);
}
