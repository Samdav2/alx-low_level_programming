#include "main.h"
/**
 * factorial - Function that calculate the factorial of a number
 * @n:  Recieves an integer
 * Return; Return an integer
 */
int factorial(int n)
{
	if (n < 0)

	return (-1);


	n = n * factorial(n - 1);

	return (n);
}
