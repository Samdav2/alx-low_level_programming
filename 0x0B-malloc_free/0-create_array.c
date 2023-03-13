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

	/**
	 * while (i < size)
	 * {
	 * return (i + create_array(size, c + 1));
	 */
	
	if (!(n = &c))
	{
	return (NULL);
	}
	n = &c;
	n = malloc(size  * sizeof(char));

	while (i < size)
	{
		printf("%p", &n);
	}
	free (n);
	return (n);
}
