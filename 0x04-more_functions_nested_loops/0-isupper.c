#include "main.h"
/**
 * _isupper - Run one if c is upper and zero is c is not
 * Return:0(success)
 * @c:chaacter for holding letters
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
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
