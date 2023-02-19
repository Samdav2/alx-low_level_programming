#include <stdio.h>
/**
 * main - Program that display number from zero to nine
 * Return: 0(success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		{
		putchar((num) + '0');
		putchar(',');
		putchar(' ');
		}
		putchar('\n');
		return (0);
}
