#include "main.h"
/**
 * is_prime_number - Print the print
 * @n: Holds a number
 * Return: An integer
 */
int is_prime_number(int n)
{
	if ((n % 2 == 1) && (n % 3 == 2 || 1))
	return (1);

	if (n > 0 && n < 3)
	return (0);

	else
	return (0);

	return (is_prime_number(n + 1));
}
