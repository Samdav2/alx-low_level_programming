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
	unsigned int i;

	if (size == 0)
	return (NULL);

	/**
	 * while (i < size)
	 * {
	 * return (i + create_array(size, c + 1));
	 */
	
	if (!(n = &c))
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	{
	n = &c;
	n = malloc(i * sizeof(char));
	free (n);
	}
	return (n);
}
