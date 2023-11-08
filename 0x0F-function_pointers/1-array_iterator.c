#include "function_pointers.h"
/**
 * array_iterator - C program that executes a function given as parameter
 * @array: A pointer to the array
 * @size: The size of the array
 * @action: Funtion pointer to perferom array action
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;


	for (i = 0; i < size; i++)
	{
		if (action || array[i] || size)
		{
			(*action)(array[i]);
		}
	}
}
