#include "function_pointers.h"
/**
 * int_index - C function that searches for an integer
 * @array: Array of integers
 * @size: The size of the integers
 * @cmp: function pointer to the function
 * Return: The search value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
			{
				return (i);
			}
		}
	}

	return (-1);
}
