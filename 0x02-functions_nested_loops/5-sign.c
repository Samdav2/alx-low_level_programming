#include "main.h"
/**
 * print_sign - function that prints the sign of a number
 * Return: 0(success)
 * @n: holds the vlaue of a number 
 */
int print_sign(int n)
{
	if (n > 1)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else (n < 0)
	{
		return ("-1");
		_putchar('-');
	}
	return (0);
}
