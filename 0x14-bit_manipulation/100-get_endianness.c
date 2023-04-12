#include "main.h"
/**
 * get_endianness - C function that checks for endianess
 * Return: 0 if big endian and 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;

	char *p = (char*)&num;

	if (*p == 1)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
