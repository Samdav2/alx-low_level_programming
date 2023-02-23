#include "main.h"
/**
 * print_alphabet_x10 - prints letter 10x
 * Return: 0(success)
 */
void print_alphabet_x10(void)
{
	char letter;
	int a = 0;

	while (a < 10)
	{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
	_putchar('\n');
	a++;
	}
}
