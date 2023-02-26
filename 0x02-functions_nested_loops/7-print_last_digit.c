#include "main.h"
/**
 * print_last_digit - dispplay  the last digit of a number
 * Return: Always zero 0
 * @n: Hold a vlaue
 * @last_digit: Hold a specific value
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	_putchar((last_digit) + '0');
	return (last_digit);
}
