#include "main.h"
/**
 * main - prints letter a-z is smaller cases
 * Return: 0(success)
 */
void print_alphabet(void)
{
	char letter;
	letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
		_putchar('\n');
		return (0);
}
