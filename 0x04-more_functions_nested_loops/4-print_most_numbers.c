#include "main.h"
/**
 * print_most_numbers - Print numbers exexcept from 2 and 4
 * Return: Nothing
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
		continue;
		}
		_putchar(n);

	}
	_putchar(10);
}
