#include "lists.h"
/**
 * add_nodeint_end - C program that adds new node at the end of a list
 * @head: A pointer to the pointer to the head of the list
 * @n: The value to be added to the new node
 * Return: The address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint *n_node;
	listint *last = *head;

	n_node = mallo(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	n_node-> = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
	}

	else 
	{
		while (last->next != NULL)
		{
			last = last->next;
		}

		last->next = n_node;
	}

	return (n_node);
}
