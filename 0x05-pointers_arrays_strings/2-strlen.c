#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * Return: 0(success)
 * @s: Holds the value of a string
 */
int _strlen(char *s)
{
	char a[] = "new";
	
	*s = &a;
	strlen(a);
	return (0);
}
