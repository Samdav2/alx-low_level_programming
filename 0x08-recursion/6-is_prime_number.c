#include "main.h"
/**
 * is_prime_number - Print the print
 * @n: Holds a number
 * Return: An integer
 */
int is_prime_number(int n)
{
	if (n % n == 1 && n % 1 == n)
	{
		return (1);
	}

	if (n % 2 == 1 && n % 3 == 2)
	{
	return (1);
	}

	else
	return (0);

	return (is_prime_number(n + 1));
}
