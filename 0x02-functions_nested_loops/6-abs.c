#include "main.h"
#include <stdlib.h>
/**
 * _abs - Computes the value of an integer
 * Return: 0(success)
 */
int _abs(int r)
{
	r = abs(-1);
	_putchar(('\n', r) + '0');
	r = _abs(0);
	_putchar(('\n', r) + '0');
	r = _abs(1);
	_putchar(('\n' r) + '0');
	r = _abs(-98);
	_putchar(('\n' r) + '0');
	return (0);
}

