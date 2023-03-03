#include "main.h"
/**
 * _strcat - Function that concatenates two string
 * Return: A character value
 * @dest: Holds acharacter value or string
 * @src: Holds a chracter value or string
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a) != '\0')
	{
	a++;
	}

	while (b >= 0)
	{
	*(dest + a) = *(src + b);
	if (*(src + b) == '\0')
	break;
	a++;
	b++;
	}
	return (dest);
}
