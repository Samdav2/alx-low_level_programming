#include "main.h"
/**
 * _puts_recursion - Put recursion
 * @s: Holds a string
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
}
