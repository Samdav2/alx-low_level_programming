#include "main.h"
/**
 * more_numbers - c functions that print numbers from 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int n;
	int a;

	for (n = 0; n <= 9; n++)
	{
	for (a = 0; a <= 14; a++)
		{
		_putchar(n);
		}
		_putchar('\n');
	}
}
