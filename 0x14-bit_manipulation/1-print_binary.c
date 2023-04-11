#include "main.h"
/**
 * print_binary - C function that prints the binary of a number
 * @n: The binary number to be printed
 *
 * Return: The number converted
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, j;

	i = 1;

	if (n == 0)
		_putchar('0');

	while (i <= n)
		i *= 2;
	i >>= 1;

	while (n > 0)
	{
		if (n > i)
		{
			_putchar('1');
			n -= i;
			i >>= 1;
		}

		else if (n == i)
		{
			_putchar('1');

			j = (i >> 1);

			if (j > 0)
			{
				for (i = j; i > 0; i >>= 1)
					_putchar('0');
			}

			break;
		}

		else 

		{
			_putchar('0');
			i >>= 1;
		}
	}
}
