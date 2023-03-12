#include "main.h"
/**
 * _memset - Functions that fills the memory with a constant byte
 * @s: Holds an address
 * @b: Holds a character
 * @n: The size of memory to fill
 * Return: A string or chracter
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		s[j] = b;
	return (s);
}
