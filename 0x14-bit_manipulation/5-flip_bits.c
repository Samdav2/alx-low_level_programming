#include "main.h"
/**
 * flip_bits - c function that returns the number of bits you would need to flip
 * @n: the value of number in integer
 * @m: The second value number in integer
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_r = n ^ m;
	unsigned int c = 0;

	while (xor_r)
	{
		c += xor_r & 1;
		xor_r >>= 1;
	}

	return (c);
}
