#include "lists.h"
/**
 * list_len - c program that list the lenght of a node
 * @h: A pointer to the node
 * Return: the size of the node
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
