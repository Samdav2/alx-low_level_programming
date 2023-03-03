#include "main.h"
/**
 * _strncpy - Replace the character of a string
 * @dest: Holding some chraracter
 * @src: Holding a value
 * @n: Hold a number value
 * Return: A character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
