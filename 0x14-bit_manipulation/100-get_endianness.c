#include "main.h"
/**
 * get_endianness - A c function that checks the endianess
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *bptr = (char *)&n;

	if (*bptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
