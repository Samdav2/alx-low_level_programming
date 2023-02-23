#include "main.h"
/**
 * _isdigit - prints 1 if the number is digit and 0 if not
 * Return: 0
 * @c: Use for determining character
 */
int _isdigit(int c)
{
	c = 'a';

	if (c != 0 && c != 9)
	{
	return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
	return (0);
}
