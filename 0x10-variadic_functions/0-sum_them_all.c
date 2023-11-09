#include "variadic_functions.h"
/**
 * sum_them_all - C function that return the sum of all it's parameters
 * @n: The first element in the parameters
 * Return: The sum of all the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int m;
	va_list args;

	if (n == 0)
		return (0);

	va_start (args, n);

	m = 0;

	for (i = 0; i < n; i++)
	{
		m += va_arg(args, int);
	}

	va_end(args);

	return (m);
}
