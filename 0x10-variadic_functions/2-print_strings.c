#include "variadic_functions.h"
/**
 * print_strings - c program that prints strings
 * @seperator: the string arguement seperator
 * @n: Number of the string
 * Return: Nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pointer;
	char *str;

	va_start(pointer, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(pointer, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", str);
		}

		if (seperator != NULL && i < n - 1)
		{
			printf("%s", seperator);
		}
	}

	va_end(pointer);
	printf("\n");
}
