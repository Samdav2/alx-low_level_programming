#include "main.h"
/**
 * binary_to_uint - C funtion that converts a binary number to unsigned int
 * @b: A pointer to string and 1 char
 *
 * Return: the converted number or 0 if other negative condtion are met
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n, i;

	char *p;

	 for (i = 0; b[i] != '\0'; i++)
	{
		if (atoi(int)(b[i]) != 0 && atoi(int)(b[i]) != 1)

			return (0);
	}

	if (b == NULL)
	{
	
		return (0);
	}


	n = strtol(b, &p, 2);

	return (n);
}
