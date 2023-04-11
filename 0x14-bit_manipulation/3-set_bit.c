#include "main.h"
/**
 * set_bit - C functions that sets the value of a bit to 1
 * @n: Pointer to the number
 * @index: The index number
 *
 * Return: 1 if it worked or -1 if error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = *n | (1 << index);
	return (1);
}
