#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * Return: Nothing
 * @a: Holds the address of another integer
 * @b: Holds the address of another integer
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *b;
}
