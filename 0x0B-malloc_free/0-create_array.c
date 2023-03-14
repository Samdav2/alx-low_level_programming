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
	n = malloc(size  * sizeof(char));
	free(n);

	while (i < size)
	{
	print_array_address(n + 0);
	}
	return (n);
}
void print_array_address(char n[])
{
	printf("0x%02x ", &n[0]);
}
