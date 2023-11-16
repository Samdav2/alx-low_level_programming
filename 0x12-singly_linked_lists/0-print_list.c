#include "lists.h"
/**
 * print_list - c function that print element in a singly list
 * @h: A pointer to the fist element of the node
 * Return: The size of the node
 */
size_t print_lists(const list_t *h)
{
	size_t node_co = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", h->len, h->str);
		}

		h = h->next;
		node_co++;
	}

	return (node_co);
}
