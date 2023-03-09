#include "main.h"
/**
 * is_palindrome - search for string that are palindrome
 * @s: Holds a string
 * Return: An integer
 */
int is_palindrome(char *s)
{
	int column;

	if (*s != '\0')
	{
		is_palindrome(s + 1);
	}

	if (*s == '\0')
	is_palindrome(s + 1 );

	column = is_palindrome(s + 1);

	if (*s == column)
	return (1);

	else 
	return (0);
}
