#include "main.h"
/**
 * create_array - Functions that create an array of character
 * @size: Size of the array
 * @c: The chraacters
 * Return: A character
 */
void print_array_address(char n[]);
char *create_array(unsigned int size, char c)
{
	char *n;

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
	n = malloc(size  * sizeof(char));
	free(n);
	print_array_address(n);
	return (n);
}
void print_array_address(char n[])
{
	printf("%p", n);
}
