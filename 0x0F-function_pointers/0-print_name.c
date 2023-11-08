#include "function_pointers.h"
/**
 * print_name - C function that print a name
 * @name: A pointer to the name to be printed
 * @f: A function pointer to the
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f && name)

		printf("%s\n", name);

		(*f)(name);
}
