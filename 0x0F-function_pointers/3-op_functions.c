#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - adds two numbers
 * @a: first number.
 * @b: second number.
 * Return: add.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers.
 * @a: First numbers.
 * @b: Second number.
 * Return: Difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - divides two number.
 * @a: first number.
 * @b: second number
 * Return: division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Calculates the module of two numbers
 * @a: first number
 * @b: second number
 * Return: Remainder of the division
 */

int op_mod(int a, int b)
{
	return (a % b);
}
