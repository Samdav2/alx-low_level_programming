#include "main.h"
/**
 * _strcpy - function that copies string from source destination
 * @dest: The destination
 * @src: The source
 * Return: Characte
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	ptr = '\0';
	return (dest);
}
