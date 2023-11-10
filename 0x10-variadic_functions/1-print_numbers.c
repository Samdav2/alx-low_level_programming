#include "variadic_functions.h"
/**
 * print_numbers - c program that prints numbers
 * @seperator: seperator in the arguement
 * @n: Numbers of arguements in the parameters
 * Return: Nothing;
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int pointer;

	va_start(num, n);

	for (i = 0; i < n;)
	{
		pointer = va_arg(num, int);
		printf("%d", pointer);

		if (seperator != NULL && i < n - 1)
		{
			printf("%s", seperator);
		}
		i++;
	}
	va_end(num);
	printf("\n");
}
