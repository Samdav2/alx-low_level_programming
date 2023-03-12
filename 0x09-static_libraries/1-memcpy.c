#include "main.h"
/**
 * _memcpy - Copy from one address to another
 * @dest: Destination
 * @src: Source
 * @n: Size of address to copy
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
