#include "lists.h"
/**
 * get_nodeint_at_index - C functions that returns the position of a linked list
 * @head: The head of a list
 * @index: The index of a node
 * Return: The of a null or if does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;

	while (head != NULL)
	{
		if (a == index)
			return (head);

		a++; head = head->next;
	}

	return (NULL);
}
