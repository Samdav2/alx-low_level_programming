#include "main.h"
/**
 * set_bit - C function that sets the value of a bit to 1 at a given index
 * @n: The number to be setted
 * @index: The index of the number
 * Return: 1 if it worked and -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	m = 1UL << index;

	*n |= m;

	return (1);
}
