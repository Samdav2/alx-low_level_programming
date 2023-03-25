#include "function_pointers.h"
/**
 * print_name - Function that prints name
 * @name: The name to be printed
 * @f: The function pointer
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)

	(*f)(name);
}
