#include "main.h"
/**
 * print_binary - C function that prints binary respresentation of number
 * @n: The to be hndled
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int m;
	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	m = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (m > 0)
	{
		if (n & m)
		{
			leading_zero = 0;
			_putchar('1');
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}

		m >>= 1;
	}
}
