#include "main.h"
/**
 * is_palindrome - search for string that are palindrome
 * @s: Holds a string
 * Return: An integer
 */
int is_palidrome(char *s)
{
	int column;

	if (*s != '\0')
	{
		is_palidrome(s + 1);
		_putchar(*s);
		_putchar('\n');
	}

	if (*s == '\0')
	_putchar(*s);
	is_palidrome(s + 1 );

	column = is_palidrome(s + 1);

	if (*s == column)
	return (1);

	else 
	return (0);
}
