#include "main.h"
/**
 * _isupper - Run one if c is upper and zero is c is not 
 * Return: (0);
 * @c: chaacter for holding letters
 */
int _isupper(int c)
{
	c = 'A';
	_putchar("%c: %d\n", c, _isupper(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (0);
}
