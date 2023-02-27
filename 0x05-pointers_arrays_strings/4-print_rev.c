#include "main.h"
/**
 * print_rev - C function that prints in a reverse way
 * R return: Nothing
 * @s: holds the input value
 */
void print_rev(char *s)
{
	char *str;

	*str = *s;

	while (str == s)
	{
	print_rev(str);
	}
}
