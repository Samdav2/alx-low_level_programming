#include "main.h"
/**
 * print_binary - C function that prints the binary of a number
 * @n: The binary number to be printed
 *
 * Return: The number converted
 */
void print_binary(unsigned long int n)
{
	int binary[32], j, i = 0;

	while (n > 0)
	{
		binary[i] = n & 1;
		n = n >> 1;
		i++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		printf("%d", binary[j]);
	}
}
