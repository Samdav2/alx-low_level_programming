#include "main.h"
/**
 * is_palindrome - search for string that are palindrome
 * @s: Holds a string
 * Return: An integer
 */
char print_string(char *s)
{

	if (*s != '\0')
	{
		is_palindrome(s + 1);
	}
	return (is_palindrome(s + 1));
}

char print_reverse(char *s)	
{

	if (*s == '\0')
	{
	is_palindrome(s + 1);
	}
	return (is_palindrome(s + 1));
}

char print_reverse(char *s);
char print_strin(char *s);
int is_palindrome(char *s)
{

	if (print_string(s) == print_reverse(s))
	{	
	return (1);
	}

	else
	return (0);
}
