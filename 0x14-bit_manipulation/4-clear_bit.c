#include "main.h"
/**
 * clear_bit - C function that sets the value of a bit to zero
 * @n: Pointer to the number
 * @index: The index of the number
 *
 * Return: 1 if it worked or -1 if it not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
