#include <stddef.h>
#include "function_pointers.h"
/**
 * array_iterator - A execute a function given
 * @array: The array
 * @size: The size of the array
 * @action: pointer to the
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void(*action)(int))
{
	 size_t i;

	 if (!array || !size || !action)
		 return;

	 for  (i = 0; i < size; i++)
	 {
		 action(array[i]);
	 }
}
