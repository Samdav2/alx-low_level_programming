#include "lists.h"
/**
 * print_listint - Function that print the elements of a list
 * @h: A pointer to head of the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
