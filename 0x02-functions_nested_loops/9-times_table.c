#include "main.h"
/**
 * times_table - Function that prints the tims table of nine
 * Return: Nothing
 */
void times_table(void)
{
	int row, column, product, tens, ones;
	
	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	product = row * cloumn;
	tens = product / 10;
	ones = product % 10;
	if (column == 0)
	{
	_putchar('0');
	}
	else if (product < 10)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(ones + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(tens);
	_putchar(ones);
	}
	}
	_putchar('\n');
	}
}
