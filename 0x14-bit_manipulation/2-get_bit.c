#include "main.h"
/**
 * get_bit - C function that returns the value of a bit in a given index
 * @b: The value of the number
 * @index: The index value
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;

	return (n & m) ? 1 : 0;
}
