#include "main.h"
/**
 * reverse_array - Reverse integer sirings
 * @a: Holds an array of integer
 * @n: Holds a value
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int j, i, tmp;

	j = n -1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}

}
