#include "main.h"
/**
 * clear_bit - c function that sets the value of a bit to 0 at a given index
 * @n: The given number
 * @index: The index of the given number
 * Return: 1 if worked  or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}

	m = 1UL << index;

	*n &= ~m;

	return (1);
}
