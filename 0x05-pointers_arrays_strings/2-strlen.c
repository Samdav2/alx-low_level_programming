#include "main.h"
/**
 * _strlen - Returns the lenght of a string
 * Return: 0(success)
 * @s: Holds the value of a string
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != "\0")
	{
	longi++;
	s++;
	}
	return (longi);
}
