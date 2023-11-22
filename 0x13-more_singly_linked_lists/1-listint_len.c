#include "lists.h"
/**
 * listint_len - A c program Returns the number of element in a listint_t list
 * @h: A pointer to the head of the list
 * Return: The number of element in  th list
 */
size_t listint_len(const listint_t *h)
{
	size_t node_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		node_counter++;
	}

	return (node_counter);
}
