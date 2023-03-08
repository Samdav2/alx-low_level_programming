#include "main.h"
/**
 * _puts_recursion - Put recursion
 * @s: Holds a string
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')

	_puts_recursion(s);
}
