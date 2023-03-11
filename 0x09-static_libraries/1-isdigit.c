#include "main.h"
/**
 * _isdigit - prints 1 if the number is digit and 0 if not
 * Return: 0
 * @c: Use for determining character
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
	return (1);
	}
	return (0);
}
