#include "main.h"
/**
 * print_name - Function that prints name
 * @name: The name to be printed
 * @f: The function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	printf("%s", name);
}
