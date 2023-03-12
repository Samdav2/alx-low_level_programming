#include "main.h"
/**
 * _isalpha - looks for character with capital letter
 * Return: 1 and 0
 * @c: character for checking if character is a letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c  <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
