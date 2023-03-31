#include "lists.h"
#include <stdio.h>
/**
 * list_len - Returns the number of elements linked
 * @h: Pointer to element
 * Return: Number of elements linked
 */
size_t list_len(const list_t *h)
{
	int k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}

	return (k);
}
