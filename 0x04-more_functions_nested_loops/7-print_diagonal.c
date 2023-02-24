#include "main.h"
/**
 * print_diagonal - Function that print diagonal
 * Return: Nothing
 * @n: Holds a value
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
				_putchar(92);
				_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
