#include "main.h"
/**
 * binary_to_uint - C function that converts binary number to an unsigned int
 * @b: Pointer to the character
 * Return: Unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}

		result<<= 1;

		result += (*b - '0');

		b++;
	}

	return (result);
}
