#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: The string
 * Return: An integer
 */
int _strlen_recursion(char *s)
{
	int j = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		j++;
	}
	return (j);
}
