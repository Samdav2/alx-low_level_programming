#include "main.h"

/**
 * get_bit - C function that returns the value of a bit at an index
 * @n: number to be checked
 * @index: The index of a bit
 *
 * Return: The value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
