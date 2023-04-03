#include "main.h"
/**
 * listint_len - C function that returns the number of element in a list
 * @h: The head or pointer to
 * Return: The number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (a);
}
