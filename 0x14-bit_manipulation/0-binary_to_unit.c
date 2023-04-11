#include "main.h"

/**
 * _strlen - C function that returns the length of a string
 * @str: pointer to string
 *
 * Return: The lenght of a string
 */
unsigned int _strlen(char const *str)
{
	unsigned int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * _po - C functions that returns the power of a numaber
 * @n: The number needed to be raised
 * @e: The exponent for calculation
 *
 * Return: The Raise to power of a number
 */
unsigned int _po(unsigned int n, unsigned int e)
{
	unsigned int i, pow;

	pow = 1;

	if (b == 0)
		return (1);

	for (i = 0; i < e; i++)
		pow *= a;

	return (pow);
}

/**
 * binary_to_unit - C functions that converts binary to unit
 * @b: A pointer to the string of 0 and 1 chars
 *
 * Return: The result of the conversion if it's successful and 0 if other reason arose
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int, i, j, k, sum, bp;

	if (!b)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{

		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	k = _strlen(b);
	sum = 0;

	for (i = 0; j = k ; i < k; i++, j--)
	{
		bp = _po(2, j - 1);
		sum += (((b[i] - '0') * bp);
	}

	return (sum);
}
