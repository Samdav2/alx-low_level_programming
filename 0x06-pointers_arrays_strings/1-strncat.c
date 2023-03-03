#include "main.h"
/**
 * _strncat - C function that appen da specific number of string to
 * another string
 * @dest: A pointer for a string
 * @str: A pointer to a string
 * @n: Hols a value to print specific amount of string
 * Return: A character or strings
 */
char *_strncat(char *dest, char *str, int n)
{
	int a, b;

	a = 0;
	b = 0;

	while (*(dest + a ) != '\0')
	{
	a++;
	}

	while (*(str + b) < n)
	{
	*(dest + a) = *(str + b);
	if (*(str + b) == '\0')
	break;
	a++;
	b++;
	}
	return (dest);
}
