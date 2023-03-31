#include "lists.h"
#include <stdio.h>
/**
 * print_list - Functions that prints all elementes of a list_t
 * @h: content to be listed
 * Return: The size
 */
size_t print_list(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else 
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}
